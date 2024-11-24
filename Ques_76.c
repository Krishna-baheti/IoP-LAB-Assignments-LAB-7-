/*
    Topic : Write a function to check whether a number is even or odd
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

void num(int);

int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    num(n);
    return 0;
}

void num(int n)
{
    if(n % 2 == 0)
    printf("Even Number\n");
    else
    printf("Odd Number\n");
}