/*
1) Write menu driven program to perform the following:
1. Find Factorial
2. Find Square
3. Exit

Menu should be displayed till the user wishes to see. Write the program using functions for
calculating the factorial and square of a number. (Hint: Use pass by value)

Also print how many times the function for calculating factorial was called before the main
terminates.
*/
#include<stdio.h>
#include "function.h"

int main() {

	int choice;

	

	int userInput=1;

	do {
		printf("\nEnter \n1.Find Factorial \n2.Find Square \n3.Exit \n= ");
		scanf_s("%d", &choice);
		switch (choice) {
			int num;
		case 1:printf("\n1.Find Factorial\n");
			printf("\nEnter No. = ");
			scanf_s("%d", &num);
			printf("Factorial : %d", findFact(num));
			break;
		case 2:printf("\n1.Find Square\n");
			printf("\nEnter No. = ");
			scanf_s("%d", &num);
			printf("Square: %d", findSqr(num));
			break;
		case 3:printf("\n3.Exit\n");
			break;
		default:
			printf("\nInvalid Input!!!!!\n");
		}
		printf("\nDo you want to continue 0,1 : ");
		scanf_s("%d",&userInput);
	} while (userInput!=0);


	return 0;
}