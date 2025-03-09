/*
3) There is a student named "XYZ" in the class who has passed in some subjects and failed
in some. Write a program to count the number of subjects he passed and number he has
failed. Marks below 50 are considered as fail.
• If he has passed in all the subjects, print "XYZ has passed in all subjects".
If he has failed in all the subjects, print "XYZ has failed in all subjects".
Else print " "XYZ has passed in <passed number> subjects and failed in <failed
number> subjects".
Note: ID array to be used whose size should be defined using a macro. Marks of 6
subjects should be accepted from the user.
Write functions perform the tasks:
1. Accepting values -void AcceptMarks(int mks[], int n);
2. Displaying marks - void DisplayMarks(int mks[], int n);
3. Counting the passed and failed subjects - void CountSubjects (int mks[], int n);
*/

#include<stdio.h>
#include "function.h"
#define Max 6
int main() {
	int sub[Max];

	//Accept Marks
	acceptMarks(&sub,Max);
	
	//Display Marks
	displayMarks(&sub,Max);

	//count sub passed failed
	countSubjects(&sub,Max);

	return 0;
}
