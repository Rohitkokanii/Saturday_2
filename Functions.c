#include<stdio.h>

//Q1

int findFact(int num) {
	int fact = 1;
	for (int i = num; i >= 1; i--) {
		fact = fact * i;
	}
	return fact;
}


int findSqr(int num) {
	return num * num;
}

//Q2

void acceptDate(char* name, int* dd, int* mm, int* yy) {
	printf("\nEnter Name : ");
	scanf_s("%s", name,20);
	
	
	printf("\nEnter dd : ");
	scanf_s("%d",dd);

	printf("\nEnter mm : ");
	scanf_s("%d", mm);

	printf("\nEnter yy : ");
	scanf_s("%d", yy);
}

void displayDate(char* name,int* dd, int* mm, int* yy) {
	printf("\nName : %s",name);
	printf("\nBirth Date : %d/%d/%d ",*dd,*mm,*yy);
}
