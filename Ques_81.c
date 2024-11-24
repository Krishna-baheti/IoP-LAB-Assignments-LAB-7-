/*
    Topic : Write a function that return 1 if its argument is prime number and
            return zero otherwise.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Using for loop to print the above pattern
*/

#include<stdio.h>

int check_prime(int x)
{
    int flag = 0;
    for(int i = 2; i <= x - 1; i++)
    {
        if(x % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    return 1;
    else return 0;
}

int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    printf("%d\n",check_prime(n));
    return 0;
}