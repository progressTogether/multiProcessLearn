#include<string.h>
#include<stdio.h>

#include"cPrimer.h"
#ifndef _CPRIMER_H
#define _CPRIMER_H
#endif

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

char * myStrcpy( char*dest,const char *source)//pay attention const
{
	if((NULL == source) || (NULL == dest) )
	{
		printf("error:point is NULL\n");
		return NULL;
	}
	char *address = dest;
	while( (*dest++ =  *source++) != '\0')
	{
		NULL;
	}

	return address;
}

int myStrcomp(const char *compA,const char *compB)
{
	while(*compA++ == *compB++)
	{
		if('\0' == *compA)
		{
			/*
			 * when *compA==*compB and *compA=='\0',compA must equal compB.
			 * On the contrary ,still.
			 * */
			return 0;
		}
	}

	/*
	 * Pay attention unsigned char
	 *
	 * */
	if( *(unsigned char *)(compA-1) > *(unsigned char *)(compB-1) )
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int myStrlen(const char *str)
{
	int strLength = 0;
	while('\0' != *str++)
	{
		strLength++;
	}
	return strLength;
}

char * myStrcat(char*dest,const char *source)
{
	char *address = dest;
	int destLength = 0;
	int length = 0;
	DEBUG_PRINT
#ifdef 	LOW_SELF
	while('\0' != *dest++)
	{
		destLength++;
	}
	dest = address;
	length = destLength;
	while('\0' != *source)
	{
		*(dest + length) = *source;
		*(dest + length + 1) = '\0';
		length++;
		source++;
	}

#else
	while('\0' != *dest++)
	{
		NULL;
	}
	while( '\0' != (*dest++ = *source++))
	{
		NULL;
	}
#endif
	return address;
}
/*
*Summary
*first:
*second:The struct structure variable size is equal to the total memory size of each member variable in the structure.
*third:the union shared variable size is equal to the memory size of the largest memory occupied by the shared structure.
*fourth:*p++; very confusing. It is not *p = *p + 1; it is *p = * (p+1); and it is a post jerk.
*/
