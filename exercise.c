[nuwani@LAPTOP-2OMR359V ~]$ vi 30q1.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 30q1.c -o 30q1
[nuwani@LAPTOP-2OMR359V ~]$ ./30q1
Write Data : Operating System
Data send is : Operating
[nuwani@LAPTOP-2OMR359V ~]$ more 30q1.c
#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define MAX 10

//structure for message queue
struct mesg_buffer{
        long mesg_type;
        char mesg_text[100];

}message;
int main(){
        key_t key;
        int msgid;
        //ftok to generate unique key
        key = ftok("progfile",65);

        //msgget creates a message queue
        //and returns identifier
        msgid = msgget(key,0666 | IPC_CREAT);
        message.mesg_type = 1;
        printf("Write Data : ");

        fgets(message.mesg_text,MAX,stdin);

        //msgsnd to send message
        msgsnd(msgid,&message,sizeof(message),0);

        //display the message
        printf("Data send is : %s \n",message.mesg_text);

        return 0;
}

------------------------------------------------------------------------------------

[nuwani@LAPTOP-2OMR359V ~]$ vi 30q2.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc 30q2.c -o 30q2
[nuwani@LAPTOP-2OMR359V ~]$ ./30q2
Data Receive is : Operating
[nuwani@LAPTOP-2OMR359V ~]$ more 30q2.c
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>

struct mesg_buffer{
        long mesg_type;
        char mesg_text[100];

}message;

int main(){
        key_t key;
        int msgid;
        //ftok to generate unique key
        key = ftok("progfile",65);

        //msgget creates a message queue
        //and returns identifier
        msgid = msgget(key,0666 | IPC_CREAT);

        msgrcv(msgid,&message,sizeof(message),1,0);


        //display the message
        printf("Data Receive is : %s \n",message.mesg_text);

        //to destroy the message queue
        msgctl(msgid, IPC_RMID,NULL);
        return 0;

}