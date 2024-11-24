/*
    Topic : Write a function to read information from a book and display the info
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<string.h>

void book();

int main() {
    book();
    return 0;
}

void book() {
    struct Book {
        int price;
        int noOfPages;
        char book_name[20];
        char author_name[20];
        char publication[20];
    };
    struct Book bk;


    printf("Enter book name : ");
    gets(bk.book_name);
    printf("\nEnter author name : ");
    gets(bk.author_name);
    printf("\nEnter the name of publication : ");
    gets(bk.publication);
    printf("\nEnter number of pages : ");
    scanf("%d",&bk.noOfPages);
    printf("\nEnter the price of book in rupees : ");
    scanf("%d",&bk.price);
   
    printf("\nBook name : %s\n",bk.book_name);
    printf("Author name : %s\n",bk.author_name);
    printf("Number of pages : %d\n",bk.noOfPages);
    printf("Price : %d\n",bk.price);
    printf("Publication : %s\n",bk.publication);
}