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


//Q3

void acceptMarks(int *sub, int Max) {
	
	for (int i = 0; i < Max;i++) {
		printf("Enter Subject %d Marks : ",i+1);
		scanf_s("%d",sub+i);
	}
}

void displayMarks(int *sub, int Max) {
	printf("\nMarks Of 6 Sub : ");
	for (int i = 0; i < Max; i++) {
		printf("%d ", *(sub + i));
	}
}

void countSubjects(int* sub, int Max) {
	int countPass = 0;
	int countFail = 0;
	for (int i = 0; i < Max; i++) {
		if (*(sub + i) >= 50) {
			countPass++;
		}
		else {
			countFail++;
		}
	}
	if (countPass >= 6) {
		printf("\n\nXYZ is Pass in all subject :)\n");
	}
	else if (countPass == 0) {
		printf("\n\nXYZ is Fail in all Subject!\n");
	}
	else {
		printf("\n\nXYZ has passed in %d subjects and failed in %d subjects\n", countPass, countFail);
	}
	
}

//Q4 ~ remain

//Q5

void acceptArray(int* arr1, int n) {
	//printf("\nEnter Array : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d",arr1+i);
	}
}

void displayArray(int *merge,int n) {
	//printf("\nGiven Array : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", *(merge + i));
	}
}

void merge(int *arr1, int size_1, int *arr2, int size_2, int *merged,int n) {

	for (int i = 0; i < size_1; i++) {
		*(merged + i) = *(arr1+i);
	}

	for (int i = size_1; i < n; i++) {
		*(merged + i) = *(arr2+(i-size_1));
	}
}
//reversing Array 

void rev(int *merged,int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp = *(merged + i);
		*(merged + i) = *(merged + ((n-1) - i));
		*(merged + ((n-1) - i)) = temp;
	}
}

int findFactSum(int* arr, int n) {
	int sum = 0;
	int positive = 1;
	for (int i = 0; i < n;i++) {
		int num = *(arr+i);
		int fact = 1;
		

		if (num < 10 && num>0) {
			for (int j = num; j >= 1; j--) {
				fact *= j;
			}
			sum += fact;
			positive = 0;
		}
	}

	if (positive) {
		return 0;
	}
	else {
		return sum;
	}
}