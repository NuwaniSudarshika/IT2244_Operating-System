![Screenshot (230)](https://github.com/user-attachments/assets/531c0d7f-57d3-4912-a062-a03b1674f3d8)
![Screenshot (231)](https://github.com/user-attachments/assets/0151910e-c3c8-4dbd-a3c3-415d56c9d000)
✅ Q1: Basic fork() Output
File: 20q1.c
This program demonstrates the use of the fork() system call, which creates a new process (child).

fork() returns 0 to the child and the child’s PID to the parent.

getpid() gets the current process's ID.

After the fork, both parent and child print messages, showing that the code runs in both processes.

📌 Purpose: To observe how both parent and child processes execute after a fork and how their PIDs differ.

✅ Q2: Identify Parent and Child Processes
File: 20q2.c
This program creates a child process using fork() and uses an if statement to differentiate:

If fork() returns 0, it's the child process.

Otherwise, it's the parent process.

📌 Purpose: To distinguish between parent and child processes and show that both can execute different code after forking.

✅ Q3: Parent, Child, and Sibling Processes
File: 20q3.c
This program uses two fork() calls:

The first creates a child process.

In the parent, a second fork() creates a sibling process (another child of the same parent).

Each process prints its identity and relevant process IDs using getpid() and getppid().

📌 Purpose: To demonstrate:

A parent creating multiple children (sibling processes),

How getpid() and getppid() can be used to track process relationships.
