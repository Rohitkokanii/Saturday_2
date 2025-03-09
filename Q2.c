/*
2) Accept name of an employee from the user and his date of birth. dd, mm and yyyy
should be accepted as integers.
Write two functions:
1. Accept dd, mm and yyyy in a function:
   void Accept(int *, int *, int *);
2. Display the date using a function.
3. Call the functions from main()
(Hint: Use passing by address. Use pointers as formal arguments.)
*/

#include<stdio.h>
#include "function.h"


int main() {
	char name[20];
	int dd;
	int mm;
	int yy;

	acceptDate(&name,&dd,&mm,&yy);

	displayDate(&name,&dd,&mm,&yy);

	return 0;
}
