                                     //LAB 2 TASK
                                      //QUESTION 1

 int main() {
     // Write C code here
     int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     for (int i=0; i<=2;i++){
         for (int j=0; j<=2; j++){
             printf("%d ",matrix[i][j]+5);
         }
         printf("\n");
     }
     printf(matrix);

     return 0;
 }

                                    //QUESTION 2
  int main() {
      int n;
      printf("Enter how many line you want to print: ");
      scanf("%d",&n);
      for (int i=1;i<=n;i++){
          for (int j=i; j<n;j++){
              printf(" ");
          }
          for (int k=1; k<=i;k++){
              printf("* ");
          }

          printf("\n");
      }
     return 0;
  }
                                  // QUESTION 3


#include <stdio.h>

int main() {
    int number;
    while (1) {
        printf("Enter a number : ");
        scanf("%d", &number);
        if (number < 0) {
            printf("Exiting the program.\n");
            break;
        }
        printf("Multiplication table for %d:\n", number);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", number, i, number * i);
        }
    }
    return 0;
}



