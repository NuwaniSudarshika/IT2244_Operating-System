#include <stdio.h>
#include <unistd.h>

int main() {
    int num1, num2, num3;

    printf("\nEnter Numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (fork() == 0) { 
        printf("Factorial Process ID: %d\n", getpid());
        int fact = 1;
        for (int i = 1; i <= num1; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %d\n", num1, fact);
        return 0;
    }

    if (fork() == 0) { 
        printf("Sub-Parent Process ID: %d\n", getpid());

        if (fork() == 0) { 
            printf("Fibonacci Process ID: %d\n", getpid());
            int a = 0, b = 1, next;
            printf("Fibonacci series up to %d: ", num2);
            while (a <= num2) {
                printf("%d ", a);
                next = a + b;
                a = b;
                b = next;
            }
            printf("\n");
            return 0;
        }

        if (fork() == 0) { 
            printf("Prime Numbers Process ID: %d\n", getpid());
            printf("Prime numbers up to %d: ", num3);
            for (int i = 2; i <= num3; i++) {
                int isPrime = 1;
                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime) {
                    printf("%d ", i);
                }
            }
            printf("\n");
            return 0;
        }

        return 0; 
    }

    printf("Main Parent Process ID: %d\n", getpid()); 

    return 0;
}