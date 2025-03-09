/*
6) Write a program to find the sum of factorial numbers in an array. Consider the number
for finding the factorial only if it is positive and single digit. If not, print the message —
"There are no positive and single digit numbers in the array".
Example — int array(l = {2, -7, 14, 3, -25, 5};
The O/P will be 128. [Factorial of only 2, 3 and 5 will be calculated as per the
conditions given].
*/

#include<stdio.h>
#include"function.h"

#define max 6
int main() {

	int num[] = { 2, -7, 14, 3, 25, 5 };

	int sum=findFactSum(&num,max);

	if (sum) {
		printf("\nSum : %d\n", sum);
	}
	else {
		printf("\n There are no positive and single digit numbers in the array \n");
	}
	

	return 0;
}