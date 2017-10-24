/*
*fork_test.c
*version1
*Create on:2017:10:24
*	Author:x-hui
*/
#include<unistd.h>
#include<stdio.h>
int main()
{
	pid_t fpid;
	int count = 0;
	printf("main process ID:%4d\n",getpid());
	fpid = fork();
	if( 0 > fpid)
	{
		printf("error in fork!\n");	
	}
	else if( 0 == fpid)
	{
		printf("This is child process.We can share count:%d\n",count);
		printf("Parent prcocess ID is %4d. Self process ID is %4d.Child process ID is %4d.\n",getppid,getpid(),fpid);
		count++;
	}
	else 
	{
		printf("This is parent process.We can share count:%d\n",count);
		printf("Parent prcocess ID is %4d. Self process ID is %4d.Child process ID is %4d.\n",getppid,getpid(),fpid);
		count++;
	}
	
	printf("we can observe count:%d\n",count);
	printf("Parent prcocess ID is %4d. Self process ID is %4d.Child process ID is %4d.\n",getppid,getpid(),fpid);
	printf("\n");
	return 0;
}
/*
*<summary>
*First:the lib of multi process is <unistd.h>.
*seccond:we can get the data of child process ID by the return value of fork();
*		:Get the data of self process ID by the function of getpid();
*		:Get the data of parent process ID by the function of getppid();
*Third:
*/