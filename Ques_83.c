/*
    Topic : Write a function to read an array and findout maximum.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int max_array(int arr[], int n);

int main()
{
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : \n");
    int max = max_array(arr,n);
    printf("The maximum element is %d\n",max);
    return 0;
}

int max_array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }
    return max;
}