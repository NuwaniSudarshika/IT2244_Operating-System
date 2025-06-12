![Screenshot (284)](https://github.com/user-attachments/assets/6c1085b7-cabc-4607-ada6-bdc51881b8ef)
📝 02q1.c – Shared Memory Writer (System V)
This program creates a shared memory segment using System V IPC and writes user input into it.

It generates a unique key with ftok()

Allocates shared memory with shmget()

Writes data to the memory segment using fgets()
The memory is not deleted here — it is expected to be read by another process.

![Screenshot (285)](https://github.com/user-attachments/assets/f8e41959-9110-49a8-ab47-ecec86320eb4)
📝 02q2.c – Shared Memory Reader (System V)
This is the counterpart to 02q1.c. It reads data from the shared memory segment:

Uses the same key to access shared memory

Reads and prints the content written by the writer

Detaches and removes the shared memory after reading

![Screenshot (286)](https://github.com/user-attachments/assets/e4f836b5-dc4c-4b94-abd8-1cbc5c95c319)
📝 02q3.c – Shared Memory Using mmap() (Parent ↔ Child)
This program demonstrates communication between a parent and child process using mmap():

Creates an anonymous shared memory region

The child writes a message to the shared memory

The parent waits for the child to finish, then reads the message

Uses munmap() to clean up after communication
