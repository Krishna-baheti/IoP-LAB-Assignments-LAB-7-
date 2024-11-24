/*
    Topic : Write a function that will generate and print the first N fibonacci
            numbers. Test the function for N = 5, 10 and 15.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include <stdio.h>

void printFibonacci(int);

int main()
{
    printf("Enter the number of terms in fibonacci series : ");
    int n;
    scanf("%d",&n);
	printFibonacci(n);
	return 0;
}

void printFibonacci(int n)
{
	int first = 0, second = 1, i;

	if (n < 1)
		return;
	printf("%d ", first); // print zero always
	for (i = 1; i < n; i++) {
		printf("%d ", second);
		int next = first + second;
		first = second;
		second = next;
	}
}


