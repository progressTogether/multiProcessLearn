#include<string.h>
#include<stdio.h>

#include"myStrLib.h"

char * myStrcpy(char*dest, const char *source) //pay attention const
{
	if ((NULL == source) || (NULL == dest))
	{
		printf("error:point is NULL\n");
		return NULL;
	}
	char *address = dest;
	while ((*dest++ = *source++) != '\0')
	{
		NULL;
	}

	return address;
}

int myStrcomp(const char *compA, const char *compB)
{
	while (*compA++ == *compB++)
	{
		if ('\0' == *compA)
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
	if (*(unsigned char *) (compA - 1) > *(unsigned char *) (compB - 1))
	{
		return 1;
	} else
	{
		return -1;
	}
}

int myStrlen(const char *str)
{
	int strLength = 0;
	while ('\0' != *str++)
	{
		strLength++;
	}
	return strLength;
}

char * myStrcat(char*dest, const char *source)
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
	while ('\0' != *dest++)
	{
		NULL;
	}
	while ('\0' != (*dest++ = *source++))
	{
		NULL;
	}
#endif
	return address;
}

char * myStrstr(char *string, char * subString)
{
	int length = 0;
	int machingFlag = 0;
	char *dest = string;
	char *matchString = subString;
	while ('\0' != *string++)
	{
		dest = string;
		machingFlag = 1;
		matchString = subString;
		length = 0;
		for (; '\0' != *(matchString); matchString++)
		{
			printf("result matchString=%s string=%s\n", matchString,
					string + length);
			if (*(string + length) != *matchString)
			{
				printf("result1 matchString=%s string=%s\n", matchString,
						string + length);
				machingFlag = 0;
				continue;
			}
			length++;
		}

		if (1 == machingFlag)
		{
			return dest;
		}

	}
	if (0 == machingFlag)
	{
		return NULL;
	}
}

char * myStrtok(char *str, const char *delim)
{
	static char *src = NULL;
	const char *indelim = delim;
	char *temp = NULL;
	if (NULL == str)
	{
		str = src;
	}
	temp = str;

	if(str == NULL)
	{
		return NULL;
	}

	if ('\0' == *str)
	{
		return NULL;
	}

//"we@can@make@it@better";
	for (; *str; str++)
	{
		delim = indelim;

		//temp
		for (; *delim; delim++)
		{

			if (*str == *delim)
			{
				*str = '\0';
				src = ++str;
				return temp;
			}
		}

	}

	if('\0' == *str )
	{
		src = NULL;
		return temp;
	}

}
/*
 *Summary
 *first:
 *second:The struct structure variable size is equal to the total memory size of each member variable in the structure.
 *third:the union shared variable size is equal to the memory size of the largest memory occupied by the shared structure.
 *fourth:*p++; very confusing. It is not *p = *p + 1; it is *p = * (p+1); and it is a post jerk.
 */
