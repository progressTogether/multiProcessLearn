#define DEBUG_PRINT printf("File name is %s.Function is %s.Local line is %d.\n",\
							__FILE__,__FUNCTION__,\
							__LINE__);

char * myStrcpy(char*dest, const char *source);
int myStrcomp(const char *compA, const char *compB);
int myStrlen(const char *str);
char * myStrcat(char*dest, const char *source);
char * myStrstr(char *string, char * subString);
char * myStrtok(char *str, const char *delim);

int sortArray(void *array, int num, int length,
		int (*callback)(void *, void *));
