/*
    Topic : Write a function to interchange the value of two variables, say X and Y
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Using for loop to print the above pattern
*/

#include<stdio.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("Value of a and b after swapping are %d and %d\n",x,y);
}

int main()
{
    printf("Enter two variables a and b : \n");
    int a, b;
    scanf("%d%d",&a,&b);
    printf("Value of a and b before swapping are %d and %d\n",a,b);
    swap(a,b); // sends the address of function
    return 0;
}