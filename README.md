# Monty ByteCodes Interpreter

"You must write the mightiest code on the web wiiiiith... a herring!" ~The Programmers Who Say Ni

Utilizing the concepts of stacks and LIFO (Last In, First Out), this repository consists of code that can read and execute Monty ByteCodes files. Herring not included.

## Description

* Opens .m file (the standard extension, though not mandatory by Monty)
* Parses through lines in the given .m file
* Runs certain functions depending on command given, or display an error
* Produces outputs depending on file content, if possible
* **_Bonus_** Includes code utilizing Brainfuck

## Requirements

* Contain the header file monty.h. Include guard it
* Compile with ```gcc -Wall -Werror -Wextra -pedantic *.c -o monty``` on gcc 4.8.4
* Rebel against Betty and The Checker and all of their absurd demands

## What The Interpreter Does

1. Checks if the shell is given a .m file to work with, and only 1 .m file to work with. IF not, program ends here
2. Checks if file is valid and openable. If not, program ends here
3. Reads each line in the file. For each line, split the line at the space
4. Check and verify that the command obtained from splitting the line is a valid command. If not, program ends here
5. Executes the command. If command requires arguments, take the argument from the file if present
6. Repeat until program reaches end of file
7. Close the file
8. Join the Knights of the Round Table ~~Pizza~~

## Files In This Repository

| File Name | Description |
| --- | --- |
|[monty.h](https://github.com/Alouie412/monty/blob/master/monty.h) | Header file. Contains libraries, structs, and function prototypes |
|[start_here.c](https://github.com/Alouie412/monty/blob/master/start_here.c) | Main file that runs first. Checks for valid .m file |
|[read_file.c](https://github.com/Alouie412/monty/blob/master/read_file.c) | File after main file. Checks if file is readable |
|[line_interpreter.c](https://github.com/Alouie412/monty/blob/master/line_interpreter.c) | File that parses through lines and runs respective functions depending on command |
|[push_to_stack.c](https://github.com/Alouie412/monty/blob/master/push_to_stack.c) | File that handles the ```push``` command |
|[print_stack.c](https://github.com/Alouie412/monty/blob/master/print_stack.c) | File that handles the ```pall``` command |
|[print_int.c](https://github.com/Alouie412/monty/blob/master/print_int.c) | File that handles the ```pint``` command |
|[Poppin_Party.c](https://github.com/Alouie412/monty/blob/master/Poppin_Party.c) | File that handles the ```pop``` command |
|[swap.c](https://github.com/Alouie412/monty/blob/master/swap.c) | File that handles the ```swap``` command |
|[addition.c](https://github.com/Alouie412/monty/blob/master/addition.c) | File that handles the ```add``` command |
|[nope.c](https://github.com/Alouie412/monty/blob/master/nope.c) | File that handles the ```nop``` command |
|[subtraction.c](https://github.com/Alouie412/monty/blob/master/subtraction.c) | File that handles the ```sub``` command |
|[division.c](https://github.com/Alouie412/monty/blob/master/division.c) | File that handles the ```div``` command |
|[multiplcation.c](https://github.com/Alouie412/monty/blob/master/multiplication.c) | File that handles the ```mul``` command |
|[modulo_op.c](https://github.com/Alouie412/monty/blob/master/modulo_op.c) | File that handles the ```mod``` command |
|[print_char.c](https://github.com/Alouie412/monty/blob/master/print_char.c) | File that handles the ```pchar``` command |
|[print_string.c](https://github.com/Alouie412/monty/blob/master/print_string.c) | File that handles the ```pstr``` command |
|[rotate_last.c](https://github.com/Alouie412/monty/blob/master/rotate_last.c) | File that handles the ```rotl``` command |
|[rotate_first.c](https://github.com/Alouie412/monty/blob/master/rotate_first.c) | File that handles the ```rotr``` command |

## Files In BF Directory

| File Name | Description |
| --- | --- |
|[1000-holberton.bf](https://github.com/Alouie412/monty/blob/master/bf/1000-holberton.bf) | File that prints "Holberton" using Brainfuck code |
|[1001-add.bf](https://github.com/Alouie412/monty/blob/master/bf/1001-add.bf) | File that adds two integers taken from stdin. Results will only be a single digit integer |

## Opcode Commands

| Commands | Description |
| --- | --- |
| push <int> | Pushes an element to the stack, if the element contains a valid integer |
| pall | Prints all values on the stack. Prints in reverse as stacks function on LIFO (Last In, First Out) |
| pint | Prints the value at the top of the stack, then a newline. |
| pop | Removes the topmost element in the stack. |
| swap | Have the top and second-from-top element trade places. |
| add | Adds the top element's integer value to the second-from-top element, then removes the top element from the stack. |
| nop | Does absolutely nothing. Yep. |
| sub | Subtracts the top element's integer value from the second-from-top element, then removes the top element from the stack. |
| div | Divides the top element's integer value from the second-from-top element, then removes the top element from the stack. |
| mul | Multiplies the top element's integer value with the second-from-top element, then removes the top element from the stack. |
| mod | Divides the top element's integer value from the second-from-top element to get the remainder, then removes the top element from the stack. |
| pchar | Prints the value of the top stack as a character. |
| pstr | Prints all values of the stack as characters. |
| rotl | Moves the topmost element to the bottom of the stack. The second-from-top element becomes the new top of the stack |
| rotr | Moves the bottommost element to the top of the stack. The second-from-bottom element becomes the new bottom of the stack |
