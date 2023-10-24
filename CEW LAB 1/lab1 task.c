                                    //LAB 1 TASKS
                                    //TASK 1
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("%d is positive.\n", number);
        if (number % 2 == 0) {
            printf("%d is even.\n", number);
        } else {
            printf("%d is odd.\n", number);
        }
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    }
    return 0;
}
                                     // TASK 2
#include <stdio.h>
int main() {
    int x, y;
    printf("Enter the first integer: ");
    scanf("%d", &x);
    printf("Enter the second integer: ");
    scanf("%d", &y);
    if (x > 5 && y > 5) {
        printf("Sum of both integers is: %d\n", x + y);
    }
    else if (x > 5 || y > 5) {
        printf("Multiplication of both integers is: %d\n",x * y);
    }
    else {
        printf("Hello, World!\n");
    }
    return 0;
}
                                //TASK 3
#include <stdio.h>
#include <stdlib.h>

void myfunc(int x) {
    printf("%d * 1 = %d\n", x, x * 1);
    printf("%d * 2 = %d\n", x, x * 2);
    printf("%d * 3 = %d\n", x, x * 3);
    printf("%d * 4 = %d\n", x, x * 4);
    printf("%d * 5 = %d\n", x, x * 5);
    printf("%d * 6 = %d\n", x, x * 6);
    printf("%d * 7 = %d\n", x, x * 7);
    printf("%d * 8 = %d\n", x, x * 8);
    printf("%d * 9 = %d\n", x, x * 9);
    printf("%d * 10 = %d\n", x, x * 10);
}

int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    myfunc(x);
    return 0;
}


