[nuwani@LAPTOP-2OMR359V ~]$ vi 20q1.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 20q1.c -o 20q1
[nuwani@LAPTOP-2OMR359V ~]$ ./20q1

 Hello World
 the pid is 48
 the pid is 49
 Hello World
 the pid is 49
 the pid is 0
[nuwani@LAPTOP-2OMR359V ~]$ more 20q1.c

#include<stdio.h>
#include<unistd.h>
int main(){
	printf("\n Hello World");
	int f=fork();
	int p=getpid();
	printf("\n the pid is %d",p);
	printf("\n the pid is %d\n",f);
	
	
	
	return 0;
}

-----------------------------------------------------------------------------------------
[nuwani@LAPTOP-2OMR359V ~]$ vi 20q2.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 20q2.c -o 20q2
[nuwani@LAPTOP-2OMR359V ~]$ ./20q2
Hello World!
 I am parent
Hello World!
 I am Child
[nuwani@LAPTOP-2OMR359V ~]$ more 20q2.c
#include<stdio.h>
#include<unistd.h>
int main(){
        int f=fork();
        printf("Hello World!\n");
        if(f==0){
                printf(" I am Child\n");
        }
        else{
        printf(" I am parent\n");
        }

        return 0;
}

-------------------------------------------------------------------------------------------
[nuwani@LAPTOP-2OMR359V ~]$ vi 20q3.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 20q3.c -o 20q3
[nuwani@LAPTOP-2OMR359V ~]$ ./20q3
I am Parent
I am Child
My  ID 66
My Parent ID 13
My Parent ID is 66
I am Sibiling
My Parent ID is 66
[nuwani@LAPTOP-2OMR359V ~]$ more 20q3.c
#include<stdio.h>
#include<unistd.h>
int main(){
        int f=fork();
        if(f==0){
                printf("I am Child\n");
                printf("My Parent ID is %d\n",getppid());
        }
        else{
                int f1=fork();
                if(f1==0){
                printf("I am Sibiling\n");
                printf("My Parent ID is %d\n",getppid());
                }
                else{

                        printf("I am Parent\n");
                        printf("My  ID %d\n",getpid());
                printf("My Parent ID %d\n",getppid());
                }
        }
}
