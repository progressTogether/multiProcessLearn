#include<stdio.h>
#include"cPrimer.h"

int main()
{
#ifdef DEFINE_BY_XIAOHUI
	printEveryType();
#else
	printf("DEFINE_BY_XIAOHUI is close\n");
#endif
	
	return 0;
}

void printEveryType()
{
	char lengthChar = 'h';

	short lengthShort = 0;
	int lengthInt = 0;
	long lengthLong = 0;

	float lengthFloat = 0.0;
	double lengthDouble = 0.0;

	int a[10] = {0};

	int *lengthPoint = &lengthInt;

	student studentA;
	subject stuSubject;

	printf("The length of type char is %d\n",(int)sizeof(lengthChar) );

	printf("The length of type short is %d\n",(int)sizeof(lengthShort) );
	printf("The length of type int is %d\n",(int)sizeof(lengthInt));
	printf("The length of type long is %d\n",(int)sizeof(lengthLong));

	printf("The length of type float is %d\n",(int)sizeof(lengthFloat));
	printf("The length of type double is %d\n",(int)sizeof(lengthDouble));

	printf("The length of type array is %d\n",(int)sizeof(a));
	printf("The length of type point is %d\n",(int)sizeof(&a));

	printf("The length of type point is %d\n",(int)sizeof(lengthPoint));

	printf("The length of type struct is %d\n",(int)sizeof(studentA));
	printf("The length of type enum is %d\n",(int)sizeof(studentA.stuSub));
	printf("The length of type enum stuSubject is %d\n",(int)sizeof(stuSubject));
}

/*
*Summary
*first:
*second:The struct structure variable size is equal to the total memory size of each member variable in the structure.
*third:the union shared variable size is equal to the memory size of the largest memory occupied by the shared structure.
*/



