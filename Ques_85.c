/*
    Topic : Write a function to check whether a character is vowel or not
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<ctype.h>

void check_char(char);

int main() {
    printf("Enter the character : ");
    char ch;
    scanf("%c",&ch);
    ch = toupper(ch);
    check_char(ch);
    return 0;
}

void check_char(char ch) {
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("It is a vowel\n");
    } else {
        printf("It is not a vowel\n");
    }
}