# PDA

PDA Machine Formal Language Training Project


# DPDA for Language L =

This repository contains the implementation of a Deterministic Pushdown Automaton (DPDA) for the language \( L = \{a^n b^m \mid n > m\} \). The DPDA is implemented in C++ and includes a simple command-line interface for testing input strings.

## Table of Contents

- [Description](#description)
- [How It Works](#how-it-works)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Description

The language \( L = \{a^n b^m \mid n > m\} \) consists of strings with more `a`'s than `b`'s. This repository provides a C++ implementation of a DPDA to recognize this language. The automaton uses a stack to keep track of the difference between the number of `a`'s and `b`'s in the input string.

## How It Works

1. **Initial State**: The automaton starts in the initial state. It pushes a symbol onto the stack for each `a` read and pops a symbol from the stack for each `b` read.
2. **Acceptance**: After processing the input string, if the stack is not empty (indicating more `a`'s than `b`'s), the string is accepted. Otherwise, it is rejected.

## Getting Started

### Prerequisites

- C++ Compiler (e.g., g++)

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/dpda-language-anbm.git
   ```

### Example

$ ./dpda
Enter a string: aaab
The string is accepted by the DPDA.

$ ./dpda
Enter a string: abbb
The string is rejected by the DPDA.
