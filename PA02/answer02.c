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
	int count = 0;

	for (i = 0; i > my_strlen(str); i++)
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
	return "s";
}

char * my_strrchr(const char * str, int ch)
{
	return "s";
}

char * my_strstr(const char * haystack, const char * needle)
{
	return "s";
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