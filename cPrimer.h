#include"myStrLib.h"

typedef enum _subject{Chinese,Math,Physics,Chemistry,Geography,History,Biology} subject;

typedef struct _student
{
	char *name;
	int   studentID;
	subject stuSub;
} student;

void printEveryType();
