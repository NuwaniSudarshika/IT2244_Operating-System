![Screenshot (299)](https://github.com/user-attachments/assets/0e895260-691f-4ea7-bd5a-b1074d73890d)
09q1.c – Pipe Communication Between Parent and Child
Program Summary:

This program demonstrates inter-process communication using a pipe between a parent and child process. The parent sends three messages, and the child reads and prints them.

Explanation:

A pipe p[2] is created.

The parent process (fork() > 0) writes three strings into the pipe.

The child process reads from the pipe in a loop and prints each message.

It checks if all data was read properly and prints "Finished reading" when done.

![Screenshot (300)](https://github.com/user-attachments/assets/cf485cec-4cf0-4f0b-bccd-ed578b79eeca)09q2.c – Area Calculation Using Bi-directional Pipes
Program Summary:

This program calculates the area of a selected geometric shape using two pipes for communication between a parent and child process. The parent sends the shape type, and the child takes further inputs and returns the calculated area.

Explanation:

Two pipes:

pipe1: Parent to Child (sends shape type)

pipe2: Child to Parent (sends area result)

The parent reads the shape type (e.g., 'C' for circle) and sends it to the child.

The child asks the user for relevant dimensions, calculates the area, and sends it back.

The parent receives and prints the final result.

Supported Shapes and Area Formulas:

Circle (C): πr²

Triangle (T): 0.5 × base × height

Square (S): side × side

Rectangle (R): length × width
