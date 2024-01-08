# CLI Calculator in C
#### Video Demo:  <https://www.youtube.com/watch?v=2Nm4oGKeIUI>
#### Description:

# CLI Calculator in C

This project is a C-Programming Language CLI program which aims to provide arithmetic-level operations.

## Overview

The CLI Calculator is an interactive program that operates in the terminal, resembling a simplified version of the Windows OS calculator. This utility not only brings the basic arithmetic functions to your fingertips but also introduces an easy-to-navigate, user-friendly interface.

## Features

1. **Basic Arithmetic Operations**: This CLI Calculator offers the four fundamental arithmetic operations - addition, subtraction, multiplication, and division.

2. **Continuous Input**: Unlike standard calculators where the number of inputs needs to be specified beforehand, this calculator allows for an indefinite number of operations. Users can continuously enter numbers and perform operations until they decide to obtain the result or quit.

3. **Input Validation**: The program ensures the integrity of user input. It validates the first number entered and, in the case of invalid input (such as characters or symbols that are not numbers), it prompts users to retry.

4. **Whitespace Handling**: It is designed to handle whitespaces in inputs gracefully. Users have the flexibility to enter operations and numbers with spaces in between, such as "- 5".

5. **Division by Zero Handling**: The calculator has built-in handling for division by zero errors, notifying users of the impossibility of the operation.

6. **Result Retrieval**: Users can retrieve the result of the calculations by entering the '=' symbol.

7. **Easy Termination**: The program can be effortlessly closed by entering 'q'.

## Usage

To run the CLI Calculator, make sure you have a C compiler. Compile the program using the following command: ```make calculator```

Now, you can run it using: ```./calculator```


Once the program is running, follow the on-screen prompts to enter numbers and perform arithmetic operations.

## Dependencies

This project makes use of the CS50 library for safely reading user input. Please ensure you have the CS50 library installed and set up properly for the code to compile and run.

## Conclusion

The CLI Calculator serves as a handy tool for those in need of a simple, efficient, and user-oriented calculator right in their terminal. Whether you're summing up expenses, calculating proportions, or solving math problems, this calculator is built to streamline your experience.