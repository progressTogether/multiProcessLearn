#include<stdio.h>

#include"myStrLib.c"
#ifndef _CPRIMER_H
#define _CPRIMER_H
#endif

int main()
{
#ifndef DEFINE_BY_XIAOHUI
	printEveryType();

	char message[] = "Every Thing is ok!";
	//char *test = myStrcpy(message,"we must test");
	strcpy(message,"we must test");
	printf("%s\n",message);
	printf("%s\n",message+13);

	printf("Equal = %d\n",myStrcomp("helloerty","hellosssss"));
	printf("myStrlen:Length= %d\n",myStrlen("helloerty"));
	DEBUG_PRINT

	char test[30] = "you are";
		printf("The combined \"you are\"  and \"cool\" results were \"%s\" by myStrcat.\n",myStrcat(test,"cool!"));

#else
	printf("DEFINE_BY_XIAOHUI is close\n");
#endif

	printf("mach %s\n",myStrstr("hello every","every"));
	printf("mach %s\n",strstr("hello every","every"));
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





