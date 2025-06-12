//Question 01
[nuwani@LAPTOP-2OMR359V ~]$ vi 06q1.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 06q1.c -o 06q1
[nuwani@LAPTOP-2OMR359V ~]$ ./06q1
hello,world #1
hello,world #2
hello,world #3
[nuwani@LAPTOP-2OMR359V ~]$ more 06q1.c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MSGSIZE 16
char* msg1 = "hello,world #1";
char* msg2 = "hello,world #2";
char* msg3 = "hello,world #3";

int main(){
        char inbuf[MSGSIZE];
        int p[2], i;

        if(pipe(p)<0)
                exit(1);


        write(p[1],msg1,MSGSIZE); 
        write(p[1],msg2,MSGSIZE);
        write(p[1],msg3,MSGSIZE);

        for(i=0; i<3; i++){
                read(p[0],inbuf,MSGSIZE);
                printf("%s\n",inbuf);
        }
        return 0;
}

/*
Exercise

1.read two input from user (//parent process)
name:
reg no:
age:

2. print the output from the child(//child process)

name: abc
reg no : 2022/ict/01
age: 25
*/

[nuwani@LAPTOP-2OMR359V ~]$ vi 06q2.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 06q2.c -o 06q2
[nuwani@LAPTOP-2OMR359V ~]$ ./06q2
Enter Name: nuwani
Enter Reg No: 2021ICT31
Enter Age: 24

Child Process Output:
Name: nuwani
Reg No: 2021ICT31
Age: 24

[nuwani@LAPTOP-2OMR359V ~]$ more 06q2.c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define MSGSIZE 64 

int main() {
    int pipefd[2]; 
    char buffer[MSGSIZE];

    if (pipe(pipefd) == -1) {
        perror("Pipe creation failed");
        exit(1);
    }

    pid_t f = fork();

    if (f < 0) {
        perror("Fork failed");
        exit(1);
    }
    else if (f == 0) { 
        close(pipefd[1]); 
        read(pipefd[0], buffer, MSGSIZE); 
        printf("\nChild Process Output:\n%s\n", buffer);
        close(pipefd[0]);  
    }
    else {
        close(pipefd[0]);  

       
        char name[MSGSIZE], reg_no[MSGSIZE], age[MSGSIZE];

        printf("Enter Name: ");
        fgets(name, MSGSIZE, stdin);
        printf("Enter Reg No: ");
        fgets(reg_no, MSGSIZE, stdin);
        printf("Enter Age: ");
        fgets(age, MSGSIZE, stdin);

      
        snprintf(buffer, MSGSIZE, "Name: %sReg No: %sAge: %s", name, reg_no, age);

       
        write(pipefd[1], buffer, strlen(buffer) + 1);
        close(pipefd[1]);  

        wait(NULL); 
    }

    return 0;
}

/*
step 01: parent process; get input from user.
step 02: sending there inputs to child process.
step 03: child process getting these inputs from parent and
         doing calculations
step 04: send the calculated values to parent
step 05: parent print the output.
*/

[nuwani@LAPTOP-2OMR359V ~]$ vi 06q3.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 06q3.c -o 06q3
[nuwani@LAPTOP-2OMR359V ~]$ ./06q3
Enter first number: 5
Enter second number: 8
Enter operator (+, -, *, /): +
Result from child process: 5 + 8 = 13
[nuwani@LAPTOP-2OMR359V ~]$ more 06q3.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    int pipe1[2]; // Parent to Child
    int pipe2[2]; // Child to Parent

    if (pipe(pipe1) == -1 || pipe(pipe2) == -1) {
        perror("Pipe creation failed");
        return 1;
    }

    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    }
    else if (pid == 0) {
        // Child Process
        close(pipe1[1]); // Close write end of pipe1
        close(pipe2[0]); // Close read end of pipe2

        int a, b;
        char op;

        // Read input from parent
        read(pipe1[0], &a, sizeof(int));
        read(pipe1[0], &b, sizeof(int));
        read(pipe1[0], &op, sizeof(char));

        int result;
        switch (op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': result = (b != 0) ? a / b : 0; break;
            default: result = 0;
        }

        // Send result to parent
        write(pipe2[1], &result, sizeof(int));

        close(pipe1[0]);
        close(pipe2[1]);
    }
    else {
        // Parent Process
        close(pipe1[0]); // Close read end of pipe1
        close(pipe2[1]); // Close write end of pipe2

        int a, b;
        char op;

        // Get input from user
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op); // space before %c to ignore newline

        // Send inputs to child
        write(pipe1[1], &a, sizeof(int));
        write(pipe1[1], &b, sizeof(int));
        write(pipe1[1], &op, sizeof(char));

        // Read result from child
        int result;
        read(pipe2[0], &result, sizeof(int));

        printf("Result from child process: %d %c %d = %d\n", a, op, b, result);

        close(pipe1[1]);
        close(pipe2[0]);
    }

    return 0;
}