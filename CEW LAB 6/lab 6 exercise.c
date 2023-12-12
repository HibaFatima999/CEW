                                         //QUESTION 1
//main.c
//#include <stdio.h>
//#include "files.h"
//int main(){
// FILE* str;
//
//printf("%d\n",doesExist("new.txt"));
// write("new.txt", str, "\nWorks
//like\na charm!");
// read("new.txt", str);
// return 0;
//}
//files.h
//#ifndef FILES_h
//#define FILES_h
//void read();
//void write();
//int doesExist();
//#endif
//files.c
//#include "files.h"
//#include <stdlib.h>
//#include <stdio.h>
//int doesExist(char* file){
// FILE* fptr;
// if(!(fptr = fopen(file, "r"))){
// return 0;
// }
// return 1;
//}
//void read(char* file, FILE* stream)
//{
// char* buff = malloc(10 *
//sizeof(char));
//stream = fopen(file, "r");
// while(fgets(buff, 10, stream)){
// printf("%s", buff);
// }
// fclose(stream);
//}
//void write(char* file, FILE* stream,
//char* str){
// stream = fopen(file, "a");
// fprintf(stream, str);
// fclose(stream);
//}
//new.txt
//This is
//a test
//file...

                                    //QUESTION 2
//main.c
//#include <stdio.h>
//#include "linked_list.h"
//int main(){
// struct Node *head = createNode
//(5);
// insert(head, 4);
// insert(head, 3);
// printList(head);
// head = deleteNode(head, 5);
// printList(head);
// struct Node *head2 = searchNode
//(head, 2);
// printList(head2);
// freeList(head2);
// return 0;
//}
//linked_list.h
//#ifndef LINKED_LIST_h
//#define LINKED_LIST_h
//struct Node *createNode (int data);
//struct Node *insert (struct Node
//*head, int data);
//struct Node *deleteNode (struct
//Node *head, int data);
//struct Node *searchNode (struct
//Node *head, int data);
//void printList (struct Node *head);
//void freeList (struct Node *head);
//#endif
//linked_list.c
//#include "linked_list.h"
//#include <stdlib.h>
//#include <stdio.h>
//struct Node
//{
// int data;
// struct Node *next;
//};
//struct Node *createNode (int data)
//{
// struct Node *newNode = (struct
//Node *) malloc (sizeof (struct Node));
// newNode->data = data;
// newNode->next = NULL;
// return newNode;
//}
//struct Node *insert (struct Node
//*head, int data)
//{
// struct Node *newNode =
//createNode (data);
// if (head == NULL)
// {
// return newNode;
// }
// struct Node *current = head;
// while (current->next != NULL)
// {
// current = current->next;
// }
// current->next = newNode;
// return head;
//}
//struct Node *deleteNode (struct
//Node *head, int data)
//{
// struct Node *current = head;
// struct Node *prev = NULL;
// while (current != NULL && current-
//>data != data)
// {
// prev = current;
// current = current->next;
//}
// if (current == NULL)
// {
// printf ("Node with value not
//found\n");
// return head;
// }
// if (prev == NULL)
// {
// head = current->next;
// }
// else
// {
// prev->next = current->next;
// }
// free (current);
// return head;
//}
//struct Node *searchNode (struct
//Node *head, int data)
//{
// struct Node *current = head;
// while (current != NULL)
// {
// if (current->data == data)
//{
// return current;
//}
// current = current->next;
// }
// return NULL;
//}
//void printList (struct Node *head)
//{
// struct Node *current = head;
// while (current != NULL)
// {
// printf ("%d -> ", current->data);
// current = current->next;
// }
// printf ("NULL\n");
//}
//void freeList (struct Node *head)
//{
// struct Node *current = head;
// while (current != NULL)
// {
// struct Node *temp = current;
// current = current->next;
// free (temp);
// }
//}
                                  //QUESTION 3
//main.c
//#include <stdio.h>
//#include "matrix.h"
//int main(){
// int mat1[2][2] = {{1,2},{5,6}};
// int mat2[2][2] = {{1,2},{5,6}};
// printf("On Addition\n");
// int *mat3 = add(mat1, 2, 2, mat2,
//2, 2);
// print_mat(mat3, 2, 2);
// printf("\nOn Multiplication\n");
// int *mat4 = mul(mat1, 2, 2, mat2,
//2, 2);
// print_mat(mat4, 2, 2);
// printf("\nOn Transposition\n");
// int *mat5 = transpose(mat1, 2, 2);
// print_mat(mat5, 2, 2);
// printf("\nDeterminant of mat1\n");
// int num = determinant(mat1, 2,
//2);
// print_mat(mat1, 2, 2);
// printf("Determinant = %d", num);
// return 0;
//}
//matrix.h
//#ifndef MATRIX_h
//#define MATRIX_h
//int* add();
//int* mul();
//int* transpose();
//int determinant();
//void print_mat();
//#endif
//matrix.c
//#include "matrix.h"
//#include <stdlib.h>
//#include <stdio.h>
//int* add(int* mat1, int r1, int c1, int*
//mat2, int r2, int c2){
// if(c1 == c2 && r1 == r2){
// int* mat3 = (int*)malloc(r1 * c1 *
//sizeof(int)); // Use dynamic memory
//allocation
// int* ptr = mat3;
// for(int i = 0; i<r1; i++){
// for(int j = 0; j<c1; j++){
// *ptr = *mat1 + *mat2;
// // printf("%d ", *ptr);
// mat1++;
// mat2++;
// ptr++;}
// }
// return mat3;
// }
// return NULL;
//}
//int* mul(int *mat1, int r1, int c1, int*
//mat2, int r2, int c2){
// if(c1 == r2){
// int* mat3 = (int*)malloc(r1 * c1 *
//sizeof(int)); // Use dynamic memory
//allocation
// int* ptr = mat3;
// for(int i = 0; i<r1; i++){
// for(int j = 0; j<c2; j++){
// *ptr = 0;
// for(int k = 0; k<c1; k++){
// *ptr += mat1[i * c1 + k] *
//mat2[k * c2 + j];
// }
// // printf("%d ", *ptr);
// ptr++;
//
// }
//}
// return mat3;
// }
// return NULL;
//}
//int* transpose(int *mat1, int r, int c){
// int* mat = (int*)malloc(r * c *
//sizeof(int));
// int* ptr = mat;
// for(int j = 0; j<c; j++){
// for(int i = 0; i<r; i++){
// *ptr = mat1[i * c + j];
// ptr++;
// }
//
// }
// return mat;
//}
//int determinant(int* mat, int r, int c){
// if(r == c){
// return mat[0] * mat[3] - mat[1] *
//mat[2];
// }
//}
//void print_mat(int* mat, int r, int c){
// for(int i = 0; i<r; i++){
// for(int j = 0; j<c; j++){
// printf("%4d ", *mat);
// mat++;}
// printf("\n");
// }
//}
