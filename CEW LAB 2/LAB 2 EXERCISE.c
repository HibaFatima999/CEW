                                    //LAB 2 EXERCISES
                                    //QUESTION 1
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("By for loop: ");
    for(i = 1; i <= 2 * n; i += 2) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum: %d\n", sum);
    sum = 0;
    i = 1;
    printf("By while loop: ");
    while(i <= 2 * n) {
        printf("%d ", i);
        sum += i;
        i += 2;
    }
    printf("\nSum: %d\n", sum);
    sum = 0;
    i = 1;
    printf("By do-while loop: ");
    do {
        printf("%d ", i);
        sum += i;
        i += 2;
    } while(i <= 2 * n);
    printf("\nSum: %d\n", sum);
    return 0;
}
                                       //QUESTION 2
#include <stdio.h>

int main() {
    int rows, i, j, space;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++) {
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

                                          //QUESTION 3

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i, isEqual = 1;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if(str1[i] != str2[i]) {
            isEqual = 0;
            break;
        }
    }
    if(isEqual) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    return 0;
}

                                        //QUESTION 4
#include <stdio.h>
int main() {
    char sentence[1000];
    int i = 0;
    printf("Enter a sentence: ");
    gets(sentence);
    while (sentence[i] != '\0') {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = sentence[i] - 32;
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] = sentence[i] + 32;
        }
        i++;
    }
    printf("Modified sentence: %s\n", sentence);
    return 0;
}


                                      // QUESTION 5
#include <stdio.h>
int main(){
    int len, count;
    printf("Enter the length of an array: ");
    scanf("%d", &len);
    int arr[len];
    for(int i = 0; i<len; i++){
        printf("Enter element#%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The unique elements in your array are:\n");
    for(int i = 0; i<len; i++){
        count = 0;
        for(int j = 0; j<len; j++)
            if(arr[i]==arr[j])
                count++;
        if(count==1)
            printf("%d ", arr[i]);
    }
    return 0;
}

                                      // QUESTION 6

#include <stdio.h>
struct Distance {
    int ft;
    int inch;
};
int main() {
    struct Distance d1, d2;
    printf("Enter the ft and inch of the first distance: ");
    scanf("%d %d", &d1.ft, &d1.inch);
    printf("Enter the ft and inch of the second distance: ");
    scanf("%d %d", &d2.ft, &d2.inch);
    printf("The total distance is: %d'%d\"\n", d1.ft + d2.ft +
           (d1.inch + d2.inch) / 12, (d1.inch + d2.inch) % 12);
    return 0;
}











