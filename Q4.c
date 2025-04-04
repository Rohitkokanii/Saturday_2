/*
4) SEED Infotech is offering a variety of courses to students. Students have the facility to
check if a particular course is available in the institution. Write a C program to perform
the following tasks:
• Search a course
• Sort the list of courses in ascending order of alphabets
• Sort the list of courses in ascending order of the length of their spelling.


*/

#include<stdio.h>
#include "function.h"

int main() {
	int choice;
	char courses[][SIZE] = {
		"Java"
		,"C Programming"
		,"Python"
		,"Sql"
		,"Dot Net"
	};

	while (1) {
		printf("\n 1.search courses");
		printf("\n 2.sort Alphabetically");
		printf("\n 3.Display");
		printf("\n 4.sort by length");
		printf("\n 5.exit \nEnter choice \n");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			searchCourse(courses);
			break;
		case 2:
			sortAlphabetically(courses);
			break;
		case 3:
			Display(courses);
			break;
		case 4:
			sortByLenght(courses);
			break;
		case 5:
			printf("\nExit!!!\n");
			exit(0);
			break;
		default:printf("\nInvalid !");
		}
	}
	return 0;
}