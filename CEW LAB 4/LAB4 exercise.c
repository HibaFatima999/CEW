                                       //QUESTION 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct Contacts
//{
// char name[100];
// char email[100];
// char p_num[12];
//};
//int main(){
// struct Contacts *cont = malloc(1*sizeof(struct Contacts));
// int i = 0, choice;
// // char del_name[100];
// int del_num;
// int j;
// while(1){
// printf("\n");
// printf("What would you like to do?\n1. Add a contact\n2. Deletea
//        contact\n3. Print contacts\n4. Delete Address Book\n");
// scanf("%d", &choice);
// printf("\n");
// switch (choice)
// {
// case 1:
//
// printf("Enter the name of the contact: ");
// scanf("%s", cont[i].name);
// printf("Enter the email of the contact: ");
// scanf("%s", cont[i].email);
// printf("Enter the phone number of the contact: ");
// scanf("%s", cont[i].p_num);
// i++;
// cont = realloc(cont, sizeof(struct Contacts) * (i));
// break;
//
// case 2:
// printf("\nEnter the serial number of the contact you would like to delete: ");
// printf("\n");
// for(int j = 0; j<i; j++){
// printf("%d. %s %s %s\n", j+1, cont[j].name,
//cont[j].email, cont[j].p_num);
// }
// scanf("%d", &del_num);
// printf("\n");
// for(j=del_num-1; j<i-1; j++){
// cont[j] = cont[j+1];
// }
// i--;
// break;
// case 3:
// for(int j = 0; j<i; j++){
// printf("%s %s %s\n", cont[j].name,
//cont[j].email, cont[j].p_num);
// }
// break;
// case 4:
// free(cont);
// return 0;
// default:
// printf("Enter a valid option!");
// }
// }
//}
                      // QUESTION 2
//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//    int data;
//    struct Node* next;
//};
//struct Node* createNode(int data) {
//    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//    if (newNode == NULL) {
//        printf("Memory allocation failed.\n");
//        exit(1);
//    }
//    newNode->data = data;
//    newNode->next = NULL;
//    return newNode;
//}
//void insertNode(struct Node** headRef, int data) {
//    struct Node* newNode = createNode(data);
//    if (*headRef == NULL) {
//        *headRef = newNode;
//        return;
//    }
//    struct Node* temp = *headRef;
//    while (temp->next != NULL) {
//        temp = temp->next;
//    }
//    temp->next = newNode;
//}
//struct Node* mergeSortedLists(struct Node* list1, struct Node* list2) {
//    struct Node* mergedList = NULL;
//    if (list1 == NULL) {
//        return list2;
//    } else if (list2 == NULL) {
//        return list1;
//    }
//    if (list1->data <= list2->data) {
//        mergedList = list1;
//        mergedList->next = mergeSortedLists(list1->next, list2);
//    } else {
//        mergedList = list2;
//        mergedList->next = mergeSortedLists(list1, list2->next);
//    }
//
//    return mergedList;
//}
//void printList(struct Node* head) {
//    struct Node* temp = head;
//    while (temp != NULL) {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    }
//    printf("\n");
//}
//void freeList(struct Node* head) {
//    struct Node* temp;
//    while (head != NULL) {
//        temp = head;
//        head = head->next;
//        free(temp);
//    }
//}
//int main() {
//    struct Node* list1 = NULL;
//    insertNode(&list1, 1);
//    insertNode(&list1, 3);
//    insertNode(&list1, 5);
//    struct Node* list2 = NULL;
//    insertNode(&list2, 2);
//    insertNode(&list2, 4);
//    insertNode(&list2, 6);
//    printf("First sorted linked list: ");
//    printList(list1);
//    printf("Second sorted linked list: ");
//    printList(list2);
//    struct Node* mergedList = mergeSortedLists(list1, list2);
//    printf("Merged sorted linked list: ");
//    printList(mergedList);
//    freeList(list1);
//    freeList(list2);
//    freeList(mergedList);
//    return 0;
//}
                             // QUESTION 3

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
// int data;
// struct Node *next;
//};
//struct Node *createNode(int data)
//{
// struct Node *newNode = malloc(sizeof(struct Node));
// if (newNode == NULL)
// {
// fprintf(stderr, "Memory allocation failed!");
// exit(0);
// }
// newNode->data = data;
// newNode->next = NULL;
// return newNode;
//}
//struct Node *insertAfter(struct Node *head, int data, int search)
//{
// struct Node *current = head;
// while (current != NULL && current->data != search)
// {
// current = current->next;
// }
// if (current->data == search)
// {
// struct Node *new = createNode(data);
// new->next = current->next;
// current->next = new;
// }
// else
// {
// printf("Node not found!\n");
// }
// return head;
//}
//int nodeCount(struct Node* head){
// struct Node* current = head;
// int count = 0;
// while(current != NULL){
// count++;
// current = current->next;
// }
// return count;
//}
//struct Node *printList(struct Node *head)
//{
// struct Node *current = head;
// while (current != NULL)
// {
// printf("%d -> ", current->data);
// current = current->next;
// }
// printf("NULL\n");
// return head;
//}
//int main()
//{
// struct Node *head = createNode(1);
// insertAfter(head, 2, 1);
// insertAfter(head, 3, 2);
// printList(head);
// int arr[50], i = 0, count = nodeCount(head);
// struct Node *temp = head;
// while(temp!=NULL){
// arr[i] = temp->data;
// temp = temp->next;
// i++;
// }
// for(int i = 0; i < count; i++){
// printf("%d\n", arr[i]);
// }
// return 0;
//}
//
                                        //QUESTION 4
//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
// int data;
// struct Node *next;
//};
//struct Node *createNode(int data)
//{
// struct Node *newNode = malloc(sizeof(struct Node));
// if (newNode == NULL)
// {
// fprintf(stderr, "Memory allocation failed!");
// exit(0);
// }
// newNode->data = data;
// newNode->next = NULL;
// return newNode;
//}
//struct Node *insertAfter(struct Node *head, int data, int search)
//{
// struct Node *current = head;
// while (current != NULL && current->data != search)
// {
// current = current->next;
// }
// if (current->data == search)
// {
// struct Node *new = createNode(data);
// new->next = current->next;
// current->next = new;
// }
// else
// {
// printf("Node not found!\n");
// }
// return head;
//}
//int nodeCount(struct Node* head){
// struct Node* current = head;
// int count = 0;
// while(current != NULL){
// count++;
// current = current->next;
// }
// return count;
//}
//struct Node *printList(struct Node *head) {
// struct Node *current = head;
// while (current != NULL)
// {
// printf("%d -> ", current->data);
// current = current->next;
// }
// printf("NULL\n");
// return head; }
//int main() {
// struct Node *head = createNode(1);
// insertAfter(head, 2, 1);
// insertAfter(head, 3, 2);
// insertAfter(head, 4, 3);
// insertAfter(head, 5, 4);
// printList(head);
// int count = nodeCount(head), i = 0;
// struct Node *temp = head;
// struct Node *temp2;
// while(temp!=NULL){
// temp2 = temp->next;
// if(temp2!=NULL){
// temp->next = temp2->next;
// }
// free(temp2);
// temp = temp->next;
// i+=2;
// }
// printList(head);
// return 0;
//}
//
//
//
//































