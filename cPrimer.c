#include<stdio.h>

#ifndef _CPRIMER_H
#define _CPRIMER_H
#endif

#include"myStrLib.c"

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
#else
	printf("DEFINE_BY_XIAOHUI is close\n");
#endif


	char test[30] = "you are";
	printf("The combined \"you are\"  and \"cool\" results were \"%s\" by myStrcat.\n",myStrcat(test,"cool!"));

	return 0;
}





