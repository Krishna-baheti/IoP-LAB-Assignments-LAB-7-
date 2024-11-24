/*
    Topic : WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
            INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.
            (PASSING ARRAY OF STRUCTURE INTO FUNCTION).
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

struct student {
        char name[50];
        int roll_num;
        int marks;
    };

void display_500(struct student arr[]);

int main() {
    struct student arr[10];
    for(int i = 0; i < 10; i++) {
        printf("Enter details of student %d\n\n",i+1);
        printf("Enter student name : ");
        scanf(" %[^\n]",arr[i].name);
        printf("Enter student roll number : ");
        scanf("%d",&arr[i].roll_num);
        printf("Enter student total marks (out of 1000) : ");
        scanf("%d",&arr[i].marks);
        printf("\n");
    }

    display_500(arr);
    return 0;
}

void display_500(struct student arr[]) {
    printf("\nInformation of student with marks greater than 500 : \n\n");
    for(int i = 0; i < 10; i++) {
        if(arr[i].marks > 500) {
            printf("Student name : %s\n",arr[i].name);
            printf("Student roll number : %d\n",arr[i].roll_num);
            printf("Student marks : %d\n",arr[i].marks);
            printf("\n");
        }
    }
}