//Q1). Print the helloWorld!

[nuwani@LAPTOP-2OMR359V ~]$ vi Q1.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q1.c -o Q1
[nuwani@LAPTOP-2OMR359V ~]$ ./Q1
Hello World!

[nuwani@LAPTOP-2OMR359V ~]$ more Q1.c
#include<stdio.h>
int main(){
        printf("Hello World!");
        return 0;
}

/*VARIABLE
we can't use the display age directly.
use the %d pass the variable value 
%d /%i - integer
%f /%F - float
%e - char
%s - string
%lf - double 

Q2).Display age*/

[nuwani@LAPTOP-2OMR359V ~]$ vi Q2.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q2.c -o Q2
[nuwani@LAPTOP-2OMR359V ~]$ ./Q2
25

[nuwani@LAPTOP-2OMR359V ~]$ more Q2.c
#include<stdio.h>
int main(){
  int age=25;
  printf("%d",age);
}

//Q3).Assign another value for age

[nuwani@LAPTOP-2OMR359V ~]$ vi Q3.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q3.c -o Q3
[nuwani@LAPTOP-2OMR359V ~]$ ./Q3
25
Assign new value
New age:31
[nuwani@LAPTOP-2OMR359V ~]$ more Q3.c
#include<stdio.h>
int main(){
  int age=25;
  printf("%d",age);

printf("\n Assign new value");

age=31;
printf("\nNew age:%d",age);
}

//Q4).switched to one value to two variables

[nuwani@LAPTOP-2OMR359V ~]$ vi Q4.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q4.c -o Q4
[nuwani@LAPTOP-2OMR359V ~]$ ./Q4
first Number:25
Second Number:25 

[nuwani@LAPTOP-2OMR359V ~]$ more Q4.c
#include<stdio.h>
int main(){
int firstNumber=25;
printf("first Number:%d ",firstNumber);

int secondNumber=firstNumber;
printf("\nSecond Number:%d ",secondNumber);

return 0;
}

//Q5).declare multiple variable in single line

[nuwani@LAPTOP-2OMR359V ~]$ vi Q5.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q5.c -o Q5
[nuwani@LAPTOP-2OMR359V ~]$ ./Q5
First Number:-134440888 
Second Number:25
 
[nuwani@LAPTOP-2OMR359V ~]$ more Q5.c
#include<stdio.h>
int main(){
int firstNumber,secondNumber=25;
printf("First Number:%d ",firstNumber);
printf("\nSecond Number:%d ",secondNumber);
return 0;
}

//Q6).Get a size of Number

[nuwani@LAPTOP-2OMR359V ~]$ vi Q6.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q6.c -o Q6
[nuwani@LAPTOP-2OMR359V ~]$ ./Q6
age:10
Size: 4

[nuwani@LAPTOP-2OMR359V ~]$ more Q6.c
#include<stdio.h>
int main(){
int age=10;
printf("age:%d",age);

printf("\nSize: %zu",sizeof(age));
}

//Q7).Initialise the double number

[nuwani@LAPTOP-2OMR359V ~]$ vi Q7.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q7.c -o Q7
[nuwani@LAPTOP-2OMR359V ~]$ ./Q7
12.450000
[nuwani@LAPTOP-2OMR359V ~]$ more Q7.c
#include<stdio.h>
int main(){
        double number=12.45;

        printf("%lf",number);
}

//get the output two decimal number
[nuwani@LAPTOP-2OMR359V ~]$ vi Q7.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q7.c -o Q7
[nuwani@LAPTOP-2OMR359V ~]$ ./Q7
12.45

[nuwani@LAPTOP-2OMR359V ~]$ more Q7.c
#include<stdio.h>
int main(){
        double number=12.45;

        printf("%.2lf",number);
}

//Q8).Initialise the float number

[nuwani@LAPTOP-2OMR359V ~]$ vi Q8.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q8.c -o Q8
[nuwani@LAPTOP-2OMR359V ~]$ ./Q8
10.900000
10.9

[nuwani@LAPTOP-2OMR359V ~]$ more Q8.c
#include<stdio.h>
int main(){
        float number1=10.9f;

                printf("%f",number1);

        printf("\n%.1f",number1);
}

//Q9).Initialise the character

[nuwani@LAPTOP-2OMR359V ~]$ vi Q9.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q9.c -o Q9
[nuwani@LAPTOP-2OMR359V ~]$ ./Q9
z
122

[nuwani@LAPTOP-2OMR359V ~]$ more Q9.c
#include<stdio.h>
int main(){
        char charcter='z';
        printf("%c",charcter);
        printf("\n%d",charcter);
}

//Q10).Take input from user

[nuwani@LAPTOP-2OMR359V ~]$ vi Q10.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q10.c -o Q10
[nuwani@LAPTOP-2OMR359V ~]$ ./Q10
Enter your age: 24

Age:24

[nuwani@LAPTOP-2OMR359V ~]$ more Q10.c
#include<stdio.h>
int main(){
        int age;
        printf("Enter your age: ");
        scanf("%d",&age);

        printf("\nAge:%d",age);
}

//Q12).Take a number and character input in user

[nuwani@LAPTOP-2OMR359V ~]$ vi Q12.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q12.c -o Q12
[nuwani@LAPTOP-2OMR359V ~]$ ./Q12
Enter double input:14.25

Your double input id:14.250000
Enter char input: a

[nuwani@LAPTOP-2OMR359V ~]$ more Q12.c
#include<stdio.h>
int main(){
        double number;
        char alpha;
        printf("Enter double input:");
        scanf("%lf", &number);
        printf("\nYour double input id:%lf",number);

        printf("Enter char input:");
        scanf("%c",&alpha);

}

//Take a one line

[nuwani@LAPTOP-2OMR359V ~]$ vi Q12.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q12.c -o Q12
[nuwani@LAPTOP-2OMR359V ~]$ ./Q12
Enter inputs: 12.45 a
1990583144f g

[nuwani@LAPTOP-2OMR359V ~]$ more Q12.c
#include<stdio.h>
int main(){
        double number;
        char alpha;

        printf("Enter inputs: ");
        scanf("%1f %c", &number,&alpha);

        printf("%if %c",&number,&alpha);
}

//Calculator

[nuwani@LAPTOP-2OMR359V ~]$ vi Q13.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc Q13.c -o Q13
[nuwani@LAPTOP-2OMR359V ~]$ ./Q13
Enter an operator (+, -, *, /): -
Enter two numbers: 45.5
13
45.50 - 13.00 = 32.50
[nuwani@LAPTOP-2OMR359V ~]$ more Q13.c
#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}