#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isAccepted(const string& input) {

    stack<char> stack;
    int state = 0; // Start state is 0

    for (char symbol : input) {
        switch (state) {
            case 0: // Initial the state
                if (symbol == 'a') {
                    stack.push('S'); // Push 'S' to the stack for each 'a'
                    state = 1; // Move to state 1
                } else {
                    return false; // If first symbol is not 'a', reject
                }
                break;
            case 1: // State 1: processing a's and b's
                if (symbol == 'a') {
                    stack.push('S'); // Push 'S' to the stack for each 'a'
                } else if (symbol == 'b') {
                    if (stack.empty()) {
                        return false; // More 'b's than 'a's, reject
                    }
                    stack.pop(); // Pop 'S' from the stack for each 'b'
                } else {
                    return false; // If symbol is neither 'a' nor 'b', reject
                }
                break;
            default:
                return false; // Invalid state, return false
        }
    }

    // Accept if there are still 'S' symbols in the stack after processing all input
    return !stack.empty();
}

int main() {

    string inputString;
    cout << "Enter A String Please : ";
    cin >> inputString;

    if (isAccepted(inputString)) {
        cout << "The String Is Accepted !" << '\n';
    } else {
        cout << "The String Is Rejected!" << '\n';
    }

    return 0;
}
