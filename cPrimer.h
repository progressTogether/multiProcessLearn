#define DEBUG_PRINT printf("File name is %s.Function is %s.Local line is %d.\n",\
							__FILE__,__FUNCTION__,\
							__LINE__);

typedef enum _subject{Chinese,Math,Physics,Chemistry,Geography,History,Biology} subject;

typedef struct _student
{
	char *name;
	int   studentID;
	subject stuSub;
} student;

void printEveryType();
char * myStrcpy(char*dest,const char *source);
int myStrcomp(const char *compA,const char *compB);
int myStrlen(const char *str);
char * myStrcat(char*dest,const char *source);
