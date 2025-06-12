![Screenshot (287)](https://github.com/user-attachments/assets/8bda6037-0680-402c-b631-78f4a49c74ae)

06q1.c - Simple Pipe Communication
Program Summary:

This program demonstrates basic inter-process communication using a pipe. It sends three fixed messages through the pipe and reads them back in the same process.

Explanation:

A pipe p[2] is created.

Three messages (msg1, msg2, msg3) are written to the pipe.

The same process reads and prints each message using a loop.

No child process is involved here.

![Screenshot (288)](https://github.com/user-attachments/assets/e82d9fc2-24bb-4559-a073-cab6867cb203)

06q2.c - Parent-to-Child Communication via Pipe
Program Summary:

This program reads user input (name, reg no, age) in the parent process and sends it to the child process using a pipe. The child then prints the received data.

Explanation:

Parent collects input using fgets().

Formats the input into a single string using snprintf().

Sends the formatted string through a pipe to the child.

The child reads from the pipe and prints the information.

![Screenshot (289)](https://github.com/user-attachments/assets/ae111ec5-e9f0-4a8b-9b3e-100e6d410fb5)

06q3.c - Bi-directional Communication & Calculation
Program Summary:

This program performs a calculation (addition, subtraction, multiplication, or division) using two pipes. The parent sends two numbers and an operator to the child, and the child sends back the result.

Explanation:

Two pipes are used:

pipe1: Parent to Child (input data)

pipe2: Child to Parent (calculated result)

The child reads two integers and an operator from the parent.

Performs the operation and sends the result back.

The parent receives and displays the result.


