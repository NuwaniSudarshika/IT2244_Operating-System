![Screenshot (233)](https://github.com/user-attachments/assets/42ddf64b-d037-4138-86dc-0b9d6cc55fb2)
![Screenshot (234)](https://github.com/user-attachments/assets/31913411-8828-4c45-a25a-d915c9a7ef0a)
✅ Q5: Multi-Process Program – Factorial, Fibonacci, and Prime Numbers
File: multi_process_operations.c

🧠 Description:

This C program accepts three numbers from the user and creates multiple processes using fork() to perform three different tasks concurrently:

Child Process 1: Calculates the factorial of the first number.

Child Process 2 (from a sub-parent): Generates the Fibonacci series up to the second number.

Child Process 3 (from the same sub-parent): Finds and prints all prime numbers up to the third number.

🛠️ Concepts Used:

fork() is used to create child processes.

Each child process performs an independent task.

getpid() displays the unique process ID of each child.

Parent and child processes execute in parallel.
