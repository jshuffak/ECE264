﻿#include "answer02.h"

size_t my_strlen(const char * str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return i;
}

int my_countchar(const char * str, char ch)
{
	int i;
	int strSize = (int)my_strlen(str);
	int count = 0;

	for (i = 0; i < strSize; i++)
	{
		if (str[i] == ch)
		{
			count++;
		}
	}

	return count;
}

char * my_strchr(const char * str, int ch)
{
	int i;
	int strSize = (int)my_strlen(str);

	for (i = 0; i <= strSize; i++)
	{
		if (str[i] == ch)
		{
			return (char *)(&str[i]);
		}
	}

	return NULL;
}

char * my_strrchr(const char * str, int ch)
{
	int i;
	int strSize = (int)my_strlen(str);

	for (i = strSize; i >= 0; i--)
	{
		if (str[i] == ch)
		{
			return (char *)(&str[i]);
		}
	}

	return NULL;
}

char * my_strstr(const char * haystack, const char * needle)
{
	if (needle == "")
		return (char *)haystack;

	int haystackSize = (int)my_strlen(haystack);
	int needleSize = (int)my_strlen(needle);
	int i;
	int j;

	for (i = 0; i + needleSize <= haystackSize; i++)
	{
		for (j = i; j <= i + needleSize; j++)
		{
			if (haystack[j] != needle[j - i])
				goto spin;
		}
		
		return (char *)haystack[i];
		
		spin:;
	}

	return NULL;
}

char * my_strcpy(char * dest, const char * src)
{
	return "s";
}

char * my_strcat(char * dest, const char * src)
{
	return "s";
}

int my_isspace(int ch)
{
	return 0;
}

int my_atoi(const char * str)
{
	return 0;
}