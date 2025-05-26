/*print numbers from 1 to 10 and  1 to 5 should
be print by child process and from 6 to 10 ahould be parent process calculate 
summation of those numbers*/

[nuwani@LAPTOP-2OMR359V ~]$ vi 22q1.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 22q1.c -o 22q1
[nuwani@LAPTOP-2OMR359V ~]$ ./22q1
I am a parent 6
I am a parent 7
I am a parent 8
I am a parent 9
I am a parent 10
Summation of parent process 40
I am a child 1
I am a child 2
I am a child 3
I am a child 4
I am a child 5
Summation of Child process 15
[nuwani@LAPTOP-2OMR359V ~]$ more 22q1.c

#include<stdio.h>
#include<unistd.h>
int main(){
	int sum=0;
	int f= fork();
	
	if(f==0){
		for(int i=1; i<=5; i++){
			printf("I am a child %d\n",i);
			sum=sum+i;
		}
		printf("Summation of Child process %d\n",sum);
		
	}
	else{
		for(int j=6; j<=10; j++){
			printf("I am a parent %d\n",j);
			sum=sum+j;
		}
		printf("Summation of parent process %d\n",sum);
		
	}
	
	return 0;
}
