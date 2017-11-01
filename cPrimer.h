#ifndef _MYSTRLIB_H
#define _MYSTRLIB_H
#include"myStrLib.h"
#endif
#include"observerPattern.h"

typedef enum _subject
{
	Chinese, Math, Physics, Chemistry, Geography, History, Biology
} subject;

typedef struct _student
{
	char *name;
	int studentID;
	subject stuSub;
} student;

void printEveryType();

int compareInt(int *parameA, int *parameB);
