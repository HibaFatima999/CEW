                                    //LAB 3 EXERCISES
                                    //QUESTION 1
//#include <stdio.h>
//void swap(int *n1, int *n2);
//int main() {
// int a, b;
// printf("Enter number 1: ");
// scanf("%d",&a);
// printf("Enter number 2: ");
// scanf("%d",&b);
// swap(&a, &b);
// printf("Number 1: %d\n", a);
// printf("Number 2: %d\n", b);
// return 0;
//}
//void swap(int *n1, int *n2){
// int temp = *n1;
// *n1 = *n2;
// *n2 = temp;
//}
//                                   //QUESTION 2
//#include <stdio.h>
//#include <string.h>
//int main(){
// char str[100];
// printf("Enter a string: ");
// fgets(str, 100, stdin);
// char *ptr = &str[strlen(str)-1];
// for(int i=strlen(str)-1; i>-1; i--){
// printf("%c", *ptr);
// ptr--;
// }
// return 0;
//}
                                     //QUESTION 3

//#include <stdio.h>
//#include <string.h>
//int main(){
// int len;
// printf("Enter the length of array: ");
// scanf("%d", &len);
// int arr[len];
// int *ptr = arr;
// for(int i=0; i<len; i++){
// printf("Enter element %d of array: ", i+1);
// scanf("%d", ptr);
// ptr++;
// }
// ptr = arr;
// printf("Array elements:\n");
// for(int i=0; i<len; i++){
// printf("%d\n", *ptr);
// ptr++;
// }
// return 0;
//}

                                    //QUESTION 4
//#include <stdio.h>
//int main(){
// int len, ele;
// printf("Enter the length of array: ");
// scanf("%d", &len);
// int arr[len], *ptr = arr;
// for(int i=0; i<len; i++){
// printf("Enter element %d of array: ", i+1);
// scanf("%d", ptr);
// ptr++;}
// ptr = arr;
// printf("Which element's index would you like to access");
// scanf("%d", &ele);
// printf("Array elements:\n");
// for(int i=0; i<len; i++){
// if(*ptr == ele){
// printf("The required element %d is at index %d
//        address %p", ele, i, ptr);}
// ptr++;}
// return 0;}
//
                                   //QUESTION 5
//#include <stdio.h>
//int main(){
// int row, col;
// printf("How many rows should the matrices have? ");
// scanf("%d", &row);
// printf("How many columns should the matrices have? ");
// scanf("%d", &col);
// int mat1[row][col];
// int *ptr1 = mat1;
// printf("For Matrix 1\n");
// for(int i=0; i<row; i++){
// for(int j=0; j<col; j++){
// printf("Enter element %d of row %d: ", j+1, i+1);
// scanf("%d", ptr1);
// ptr1++;
// }
// }
// int mat2[row][col];
// int *ptr2 = mat2;
// printf("For Matrix 1\n");
// for(int i=0; i<row; i++){
// for(int j=0; j<col; j++){
// printf("Enter element %d of row %d: ", j+1, i+1);
// scanf("%d", ptr2);
// ptr2++;
// }
// }
// ptr1 = mat1;
// ptr2 = mat2;
// int mat3[row][col];
// int *ptr3 = mat3;
// for(int i=0; i<row; i++){
// for(int j=0; j<col; j++){
// *ptr3 = *ptr1 + *ptr2;
// printf("%d ", *ptr3);
// ptr1++;
// ptr2++;
// ptr3++;
// }
// printf("\n");
// }
// return 0;
//}
//
//
//




