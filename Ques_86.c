/*
    Topic : Write a function to read line of text and find the length of string
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<string.h>

int length(char arr[]);

int main() {
    printf("Enter the string : ");
    char str[100];
    gets(str);
    int len = length(str);
    printf("Length of entered string is %d\n",len);
    return 0;
}

int length(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}
