                                    //LAB 1 EXERCISES
                                    //QUESTION 1
#include <stdio.h>

int main() {
    int employee_ID;
    float total_hours, hourly_rate, salary;
    printf("Enter employee's ID: ");
    scanf("%d", &employee_ID);
    printf("Enter total worked hours in a month: ");
    scanf("%f", &total_hours);
    printf("Enter amount received per hour: $");
    scanf("%f", &hourly_rate);
    salary = total_hours * hourly_rate;
    printf("Employee ID: %d\n", employee_ID);
    printf("Salary for the month: $%.2f\n", salary);
    return 0;
}
//                                     //QUESTION 2
#include <stdio.h>

int main() {
    float height, width, perimeter, area;
    printf("Enter height of the rectangle: ");
    scanf("%f", &height);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    perimeter = 2 * (height + width);
    area = height * width;
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    printf("Area of the rectangle: %.2f\n", area);
    return 0;
}
                                    //QUESTION 3
#include <stdio.h>

int main() {
    int height;
    printf("Enter the height of the person in centimeters: ");
    scanf("%d", &height);
    if (height < 150) {
        printf("Person is a Dwarf.\n");
    } else if (height == 150) {
        printf("Person is Average.\n");
    } else if (height >= 165) {
        printf("Person is Tall.\n");
    } else {
        printf("Please enter correct input values.\n");
    }
    return 0;
}
//                                          //QUESTION 4
//
#include<stdio.h>

int dec_to_bin(num){
  int dec = num,bin=0,a=0,b=1;
  while(dec){
        a=dec%2;
        dec=dec/2;
        bin=bin + (a*b);
        b=b*10;
    }
    return bin;
}
int main(){
    printf("DECIMAL TO BINARY CONVERTER\n");
    int num;
    printf("ENTER A DECIMAL NUMBER: ");
    scanf("%d",&num);
    printf("BINARY EQUIVALENT: %d",dec_to_bin(num));
    return 0;
}
                               // QUESTION 5

#include<stdio.h>
int fibonacci(a,b,num){
    int x=a,y=b,z,c=num;
    if (c==0)
        return 0;
    else{
        z=x+y;
        printf("%d ",z);
        return fibonacci(y,z,c-1);
    }
}
int main(){
    int a=0,b=1,num;
    printf("Enter nth term of fibonacci series:\t ");
    scanf("%d",&num);
    printf("1 ");
    fibonacci(a,b,num);
}
