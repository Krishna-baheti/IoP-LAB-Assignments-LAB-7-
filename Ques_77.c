/*
    Topic : Write a function to check whether a number is palindrome or not.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>


int palindrome(int x)
{
    int temp = x;
    int rem, sum = 0;
    while(x > 0)
    {
        rem = x % 10;
        sum = sum*10 + rem;
        x = x / 10;
    }
    return sum;
}

int main()
{
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    if(palindrome(n) == n)
    {
        printf("Yes it is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }
    return 0;
}