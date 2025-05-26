![Screenshot (235)](https://github.com/user-attachments/assets/8601c74f-aea1-48d0-bcb7-81ad04aabd9d)
This program prints a message, sleeps for 3 seconds using sleep(3), and then exits with exit(0), which signals a normal termination.
![Screenshot (236)](https://github.com/user-attachments/assets/ffd559fd-0ce2-4221-8920-3402af629a44)
The parent forks a child, the child sleeps and exits, and the parent waits and prints the child’s exit status using WEXITSTATUS.
![Screenshot (237)](https://github.com/user-attachments/assets/41ae538e-83e6-4208-90ce-b144e39518fd)
The parent creates one child, waits for it, then creates a second child. Each child sleeps and exits, and the parent tracks their completion.
![Screenshot (238)](https://github.com/user-attachments/assets/d5fc7d28-28d1-402b-9d48-ed504ea106db)
Two children run in parallel. One sleeps for 2 seconds and exits with status 2; the other sleeps for 1 second and exits with status 1. The parent waits for each and prints their PID and exit status in the order they complete.
![Screenshot (239)](https://github.com/user-attachments/assets/68fc21fe-6108-467c-bd5e-cec3bf8598b1)
The parent forks a child. The child forks a grandchild, which sleeps for 2 seconds and exits with status 2. The child waits for it, prints the grandchild’s status, and exits with status 55. The parent prints the child’s exit status.
