#include<string.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 30

//Q1

int findFact(int);


int findSqr(int num);

//Q2

void acceptDate(char*,int* dd, int* mm, int* yy);

void displayDate(char*,int* dd, int* mm, int* yy);

//Q3

void acceptMarks(int* sub, int Max);
void displayMarks(int* sub, int Max);

void countSubjects(int *sub,int Max);

//Q4 

void searchCourse(char courses[][SIZE]);

void sortAlphabetically(char courses[][SIZE]);

void Display(char courses[][SIZE]);

//Q5

void acceptArray(int* arr1, int size_1);
void displayArray(int* merge, int size_2);
void merge(int* arr1, int size_1, int* arr2, int size_2, int* merged, int n);
void rev(int* merged, int n);

//Q6

int findFactSum(int* arr, int n);