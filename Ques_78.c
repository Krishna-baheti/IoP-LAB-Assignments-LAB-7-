/*
    Topic : Write a function to check whether a number is armstrong or not
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int arm(int);

int main() {
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    if(arm(n) == n) {
        printf("It is an armstrong number\n");
    } else {
        printf("It is not an armstrong number\n");
    }
    return 0;
}

int arm(int x) {
    int sum = 0, rem;
    while(x != 0) {
        rem = x % 10;
        sum += rem * rem * rem;
        x = x / 10;
    }
    return sum;
}