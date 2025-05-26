*****check the sleeping and exit method********

//Question 01
[nuwani@LAPTOP-2OMR359V ~]$ vi 26q1.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 26q1.c -o 26q1
[nuwani@LAPTOP-2OMR359V ~]$ ./26q1
Pragram started.
Sleeping for e seconds...
Existing the program.
[nuwani@LAPTOP-2OMR359V ~]$ more 26q1.c
#include<stdio.h>
#include<stdlib.h>//for exit()
#include<unistd.h> //for sleep()

int main(){
        printf("Pragram started.\n");

        printf("Sleeping for e seconds...\n");
        sleep(3); //pause for 3 seconds

        printf("Existing the program.\n");
        exit(0); //clean exist

        return 0;
}

//Question 02
[nuwani@LAPTOP-2OMR359V ~]$ vi 26q2.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 26q2.c -o 26q2
[nuwani@LAPTOP-2OMR359V ~]$ ./26q2
Parent process started. PID: 56
Child process. PID: 57, sleeping for 2 seconds...
Child process existing.
Parent waiting for child to finish.../nChild existed with status: 0
parent process ending.
[nuwani@LAPTOP-2OMR359V ~]$ more 26q2.c
#include<stdio.h>
#include<stdlib.h> //for exit
#include<unistd.h> // for fork(),sleep()
#include<sys/wait.h> //for wait
int main(){
        pid_t pid;

        printf("Parent process started. PID: %d\n",getpid());

        pid = fork(); //create n new child process

        if(pid<0){
                perror("fork failed");
                exit(1);
        }

        if(pid == 0){
                //child process
                printf("Child process. PID: %d, sleeping for 2 seconds...\n",getpid());
                sleep(2);
                printf("Child process existing.\n");
                exit(0); //child exists with status 0

        }
        else{
                //parent process
                int status;
                printf("Parent waiting for child to finish.../n");
                wait(&status); //wait for child to finish
                if(WIFEXITED(status)){
                        printf("Child existed with status: %d\n",WEXITSTATUS(status));

                        //WEXITSTATUS(status) gets the actual exit code (0 hete).

                }else{
                        printf("child did not exit normally.\n");
                }
                printf("parent process ending.\n");
        }
        return 0;

}

//Question 03

/*First child: slept for 1 seconds. second child: slept for 3 seconds.
parent: both children have finished.*/

[nuwani@LAPTOP-2OMR359V ~]$ vi 26q3.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 26q3.c -o 26q3
[nuwani@LAPTOP-2OMR359V ~]$ ./26q3
Parent process started. PID: 65
Child01 process. PID: 66, sleeping for 1 seconds...
Child01 process existing.
Child02 process. PID: 67, sleeping for 3 seconds...
Child02 process existing.
Parent waiting for child to finish.../nChild existed with status: 0
parent process ending.
[nuwani@LAPTOP-2OMR359V ~]$ more 26q3.c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
        pid_t pid;

        printf("Parent process started. PID: %d\n",getpid());

        pid = fork();

        if(pid<0){
                perror("Fork failed.\n");
                exit(1);
        }
        if(pid == 0){
                printf("Child01 process. PID: %d, sleeping for 1 seconds...\n",getpid());
                sleep(1);
                printf("Child01 process existing.\n");
                exit(0);
        }
        wait(NULL);

        pid_t pid1;
        pid1=fork();
        if(pid1 == 0){
                        printf("Child02 process. PID: %d, sleeping for 3 seconds...\n",getpid());
                        sleep(1);
                        printf("Child02 process existing.\n");
                        exit(0);
                }
        else{
                int status;
                printf("Parent waiting for child to finish.../n");
                wait(&status);
                if(WIFEXITED(status)){
                        printf("Child existed with status: %d\n",WEXITSTATUS(status));


                }else{
                        printf("child did not exit normally.\n");
                }
                printf("parent process ending.\n");
        }
        return 0;
}

//Question 04

/*
First child: sleepsfor 2 seconds, exits with status2.
second child: sleeps for 1 seconds, exit with status 1.
parent : waits twice, and prints which child (by PID or exit code)
finished first and second.*/

[nuwani@LAPTOP-2OMR359V ~]$ vi 26q4.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 26q4.c -o 26q4
[nuwani@LAPTOP-2OMR359V ~]$ ./26q4
First finished: PID = 77, Exit status = 1
Second finished: PID = 76, Exit status = 2

[nuwani@LAPTOP-2OMR359V ~]$ more 26q4.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2;
    int status;
    pid_t first_finished, second_finished;

    pid1 = fork();
    if (pid1 == 0) {
        sleep(2);
        exit(2); 
    }

 
    pid2 = fork();
    if (pid2 == 0) {
        sleep(1);
        exit(1); 
    }


    first_finished = wait(&status);
    printf("First finished: PID = %d, Exit status = %d\n", first_finished, WEXITSTATUS(status));

    second_finished = wait(&status);
    printf("Second finished: PID = %d, Exit status = %d\n", second_finished, WEXITSTATUS(status));

    return 0;
}

//Question 05
/*
The parent creates a child process.
The child creates a grandchild process.
The grandchild sleeps 2 seconds and exits with status 2.
The child waits for the grandchild, prints its exit status, then exits with status 55*/

[nuwani@LAPTOP-2OMR359V ~]$ vi 26q5.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 26q5.c -o 26q5
[nuwani@LAPTOP-2OMR359V ~]$ ./26q5
Child: Grandchild exited with status 2
Parent: Child exited with status 55
[nuwani@LAPTOP-2OMR359V ~]$ more 26q5.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid, grandchild_pid;
    int status;

    child_pid = fork();
    if (child_pid == 0) {
        
        grandchild_pid = fork();
        if (grandchild_pid == 0) {
          
            sleep(2);
            exit(2);  
        }


        wait(&status);
        printf("Child: Grandchild exited with status %d\n", WEXITSTATUS(status));

        exit(55);  
    }

    wait(&status);
    printf("Parent: Child exited with status %d\n", WEXITSTATUS(status));

    return 0;
}
