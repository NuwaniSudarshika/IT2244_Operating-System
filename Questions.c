//IF ELSE//
/*if(condition){
	body of if statements;
}
else{
	body of else statement;
}
*/

//Q1.Enter your age and verify your aligible or not for election voting using if else condition

[nuwani@LAPTOP-2OMR359V ~]$ vi q1.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q1.c -o q1
[nuwani@LAPTOP-2OMR359V ~]$ ./q1
Enter Your age: 24
Aligible for election voting

[nuwani@LAPTOP-2OMR359V ~]$ more q1.c

#include<stdio.h>
int main(){
	int age;
	printf("Enter Your age: ");
	scanf("%d",&age);
	if(age<0){
		printf("Invalid age");
	}
	else if(age>=18){
		printf("Aligible for election voting");
	}
	else{
		printf("Not aligible for election voting");
	}
	return 0;
}

--------------------------------------------------------------------------------------------------------------
####### Ternary Operator
// (test_condition) ? expression1 : expression2;

[nuwani@LAPTOP-2OMR359V ~]$ vi q1.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q1.c -o q1
[nuwani@LAPTOP-2OMR359V ~]$ ./q1
Enter your age24
Aligible for election voting

[nuwani@LAPTOP-2OMR359V ~]$ more q1.c

#include<stdio.h>
int main(){
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	(age>=18) ? printf("Aligible for election voting") : printf("Not aligible for election voting");
	
	return 0;
}

-----------------------------------------------------------------------------------------------------------------
================================================================================================================
###### Switched Case
/* Enter the value between 1 to 7 and create a program for allowing 
output:
Enter the number between 1 yo 7 : 1
Today is sunday!
*/
[nuwani@LAPTOP-2OMR359V ~]$ vi q2.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q2.c -o q2
[nuwani@LAPTOP-2OMR359V ~]$ ./q2
Enter the value between 1 to 7:5
Today is Thursday!

[nuwani@LAPTOP-2OMR359V ~]$ more q2.c
#include<stdio.h>
int main(){
	int n;
	printf("Enter the value between 1 to 7:");
	scanf("%d",&n);
	
	switch(n){
		case 1:
		printf("Today is Sunday!");
		break;
		
		case 2:
		printf("Today is Monday!");
		break;
		
		case 3:
		printf("Today is Tuesday!");
		break;
		
		case 4:
		printf("Today is Wednesday!");
		break;
		
		case 5:
		printf("Today is Thursday!");
		break;
		
		case 6:
		printf("Today is Friday!");
		break;
		
		case 7:
		printf("Today is Saturday!");
		break;
		
		default:
		printf("Invalid Number please enter correct number.")
	}
	return 0;
}

----------------------------------------------------------------------------------------------------
/*Write a code for small astrology based on your life path number for that get date of
 from user then calculate life path number.(use switch case)*/
[nuwani@LAPTOP-2OMR359V ~]$ vi q3.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q3.c -o q3
[nuwani@LAPTOP-2OMR359V ~]$ ./q3
Enter your birth: 23
Can get help

[nuwani@LAPTOP-2OMR359V ~]$ more q3.c 
 #include<stdio.h>
 int main(){
	 int date;
	 printf("Enter your birth: ");
	 scanf("%d",&date);
	 
	 int a= date%10;
	 int b=date/10;
	 int c = a+b;
	 
	 if(c>10){
		 c=(c%10)+(c/10);
	 }
	 switch(c){
		 case 1:
		 printf("Luckey");
		 break;
		 case 2:
		 printf("Carefully do your work");
		 break;
		 case 3:
		 printf("Stronger");
		 break;
		 case 4:
		 printf("Happy");
		 break;
		 case 5:
		 printf("Can get help");
		 break;
		 case 6:
		 printf("Doubt");
		 break;
		 case 7:
		 printf("Sad");
		 break;
		 case 8:
		 printf("Like");
		 break;
		 case 9:
		 printf("Courage");
		 break;
		 default:
		 printf("Your number higher than 9"); 
	 }
	 return 0;
 }
 
 -------------------------------------------------------------------------------------------------------
 /*Write a C pragram to generate and print the Fibonacci series up to a specified numberof 
terms. The program should take the number of terms as input from the user and then display 
the corresponding fibonacci sequence.*/

[nuwani@LAPTOP-2OMR359V ~]$ vi q4.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q4.c -o q4
[nuwani@LAPTOP-2OMR359V ~]$ ./q4
Enter number:5
Fibbonacci: 0 11235
[nuwani@LAPTOP-2OMR359V ~]$ more q4.c
#include<stdio.h>
int main(){
	int n,t1=0,t2=1,nextTerm;
	printf("Enter number:");
	scanf("%d",&n);
	
	printf("Fibbonacci: %d %d",t1,t2);
	
	for(int i=2; i<=n; i++){
		nextTerm = t1+t2;
		printf("%d",nextTerm);
		t1=t2;
		t2=nextTerm;
	}
	printf("\n")
	return 0;
}

------------------------------------------------------------------------------------------
/*Write a program to calculate the factorial of a given non-negative integer*/

[nuwani@LAPTOP-2OMR359V ~]$ vi q5.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q5.c -o q5
[nuwani@LAPTOP-2OMR359V ~]$ ./q5
Enter the number.5
Factorial: 120

[nuwani@LAPTOP-2OMR359V ~]$ more q5.c
#include<stdio.h>
int main(){
	int n;
	int fact=1;
	
	printf("Enter the number.");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		fact = fact * i;
	}
	printf("Factorial: %d",fact);
	
	return 0;
}

----------------------------------------------------------------------------------------------

//Print the integer from 1 to 10 using while loop

[nuwani@LAPTOP-2OMR359V ~]$ vi q6.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q6.c -o q6
[nuwani@LAPTOP-2OMR359V ~]$ ./q6
12345678910

[nuwani@LAPTOP-2OMR359V ~]$ more q6.c

#include<stdio.h>
int main(){
	int i=1;
	while(i<=10){
		printf("%d",i);
		i++;
	}
	return 0;
}

-------------------------------------------------------------------------------------------------

//give list of numbers then calculate the summation and multiplication using for loop.

[nuwani@LAPTOP-2OMR359V ~]$ vi q7.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q7.c -o q7
[nuwani@LAPTOP-2OMR359V ~]$ ./q7
Enter the number of elements: 5
Enter 5 numbers:
3
4
6
7
8
Sum = 28
Product = 4032

[nuwani@LAPTOP-2OMR359V ~]$ more q7.c
#include <stdio.h>

int main() {
    int n, i, num;
    int sum = 0;
    int product = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
        product *= num;
    }

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}

-------------------------------------------------------------------------------------------------------
/*Write a C Program that: Accepts two string AS input from the user .
Concatenates the two strings Displays the concatenated result.
*/


[nuwani@LAPTOP-2OMR359V ~]$ vi q8.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q8.c -o q8
[nuwani@LAPTOP-2OMR359V ~]$ ./q8
Enter the first string: apple
Enter the second string: banana
Concatenated string: applebanana

[nuwani@LAPTOP-2OMR359V ~]$ more q8.c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    strcpy(result, str1);
    strcat(result, str2);

    printf("Concatenated string: %s\n", result);

    return 0;
}

-----------------------------------------------------------------------------------

/*Write a C pragram that takes a binary number (as an integer) as input and
converts it to its decimal equivalent.*/


[nuwani@LAPTOP-2OMR359V ~]$ vi q9.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q9.c -o q9
[nuwani@LAPTOP-2OMR359V ~]$ ./q9
Enter a binary number: 89
Invalid binary number.
[nuwani@LAPTOP-2OMR359V ~]$ ./q9
Enter a binary number: 11101
Decimal equivalent: 29

[nuwani@LAPTOP-2OMR359V ~]$ more q9.c
#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        remainder = binary % 10;
        if (remainder != 0 && remainder != 1) {
            printf("Invalid binary number.\n");
            return 1;
        }

        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

---------------------------------------------------------------------------------------

/*Write a C program That :
Accepts an array of integer from the user 
finds and displays the maximum and minimum values in the array*/

[nuwani@LAPTOP-2OMR359V ~]$ vi q10.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q10.c -o q10
[nuwani@LAPTOP-2OMR359V ~]$ ./q10
Enter the number of elements in the array: 4 5 6 7 8
Enter 4 integers:
Maximum value: 8
Minimum value: 5

[nuwani@LAPTOP-2OMR359V ~]$ more q10.c

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0]; // Initialize with first element

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}

-------------------------------------------------------------------------------------------
/* C progran to generate pascal's Triangle*/


[nuwani@LAPTOP-2OMR359V ~]$ vi q11.c
[nuwani@LAPTOP-2OMR359V ~]$ gcc q11.c -o q11
[nuwani@LAPTOP-2OMR359V ~]$ ./q11
Enter the number of rows: 4
         1
       1   1
     1   2   1
   1   3   3   1
[nuwani@LAPTOP-2OMR359V ~]$ more q11.c

#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}


int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        
        for (j = 0; j < rows - i - 1; j++)
            printf("  ");

       
        for (j = 0; j <= i; j++)
            printf("%4d", combination(i, j));

        printf("\n");
    }

    return 0;
}
