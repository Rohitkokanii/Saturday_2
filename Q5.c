/*
5) Create two ld arrays and initialize them. Perform the following tasks:
Merge the two arrays and copy the elements of first array followed by second array
into third array. Third array should be created dynamically depending on the number
of elements of first and second array.
Reverse the contents of third array and print the reversed array. Please note that the
values are to be reversed, that is first element will become last, etc. Do not just print
the existing array in reverse order.
*/

#include<stdio.h>
#include"function.h"
#define size_1 6
#define size_2 5

int main() {

	int arr1[size_1];
	int arr2[size_2];

	int n = size_1 + size_2;
	int merged[size_1 + size_2];

	int revArray[size_1+size_2];

	//1st array
	printf("\n1st Array : ");
	acceptArray(&arr1,size_1);

	//2nd array 
	printf("\n2nd Array : ");
	acceptArray(&arr2,size_2);

	//merge array
	printf("\nMerged Array : ");
	merge(&arr1, size_1, &arr2, size_2,&merged,n);

	displayArray(&merged,n);

	//reversing Array
	rev(&merged,n);

	printf("\n\nReversed Array : ");
	displayArray(&merged,n);

	return 0;
}