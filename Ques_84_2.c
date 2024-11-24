/*
    Topic : Write a function to read information from a book and display the info
            using pointer to structure
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

struct Book {
        int price;
        int noOfPages;
        char book_name[20];
        char author_name[20];
        char publication[20];
    };

void display(struct Book *);

int main() {

    struct Book bk;
    struct Book *ptr = &bk;

    // calling function using pointers

    display(ptr);

    return 0;

}

void display(struct Book *ptr) {

    printf("Enter book name : ");
    scanf(" %[^\n]",ptr->book_name);
    printf("\nEnter author name : ");
    scanf(" %[^\n]",ptr->author_name);
    printf("\nEnter the name of publication : ");
    scanf(" %[^\n]",ptr->publication);
    printf("\nEnter number of pages : ");
    scanf("%d",&ptr->noOfPages);
    printf("\nEnter the price of book in rupees : ");
    scanf("%d",&ptr->price);

    printf("\nYou have entered following details : \n\n");

    printf("Book name : %s\n",ptr->book_name);
    printf("Author name : %s\n",ptr->author_name);
    printf("Publication name : %s\n",ptr->publication);
    printf("Number of pages in book : %d\n",ptr->noOfPages);
    printf("Price of books : %d\n\n",ptr->price);
}

