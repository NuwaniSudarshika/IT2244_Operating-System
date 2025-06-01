![Screenshot (271)](https://github.com/user-attachments/assets/6ec76e4a-2787-43b0-9363-da530598da48)
📝 Program: Interprocess Communication using Message Queues (31q1.c)
This C program demonstrates interprocess communication (IPC) using System V message queues. It allows a parent process to send a message containing a person's name, registration number, and age to a child process.

⚙️ How It Works:
The program uses fork() to create a parent (sender) and a child (receiver) process.

A struct person is defined to hold the message data.

The parent:

Prompts the user for input (name, reg no, age).

Sends the data to the message queue using msgsnd().

The child:

Receives the message from the queue using msgrcv().

Displays the received data.

Deletes the message queue using msgctl().

📌 Key Concepts:
msgget() – Creates or accesses a message queue.

msgsnd() – Sends a message to the queue.

msgrcv() – Receives a message from the queue.

msgctl() – Performs control operations like deleting the queue.
