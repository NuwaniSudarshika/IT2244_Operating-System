![Screenshot (260)](https://github.com/user-attachments/assets/936768c3-6a1b-4b91-b5f9-793d56e411ec)
![Screenshot (261)](https://github.com/user-attachments/assets/87be8592-1d9c-4939-9ec2-cd8a9cb57bd2)

These two programs show how to send and receive messages between processes using a message queue in Linux.

30q1.c — Sender: Writes data to the message queue.

30q2.c — Receiver: Reads data from the message queue.

 30q1.c – Sender Program
 ftok("progfile", 65) creates a unique key using the file progfile and ID 65.

msgget(...) creates a message queue if it doesn’t exist and returns its ID.

fgets(...) reads user input.

msgsnd(...) sends the message (type 1) to the queue.

📄 30q2.c – Receiver Program
Uses the same key as the sender to access the same message queue.

msgrcv(...) receives the message of type 1.

msgctl(..., IPC_RMID, ...) deletes the message queue after reading the message.

