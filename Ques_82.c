/*
    Topic : Write a function to calculate NCR factorials of a given number
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int fact(int x)
{
    int factorial = 1;
    for(int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int ncr(int n, int r)
{
    int ncr = fact(n)/(fact(n - r)*fact(r));
    return ncr;
}

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d",&n);
    printf("\nEnter the value of r : ");
    int r;
    scanf("%d",&r);
    printf("\nValue of NCR factorial is %d\n",ncr(n,r));
    return 0;
}