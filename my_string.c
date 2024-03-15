// my_string.c

#include "my_string.h"

bool IsIntString(char* str_)
{
	if (str_[0] == '-')
		str_++;
	
	while(*str_)
	{
		if (*str_ < '0' || *str_ > '9')
			return false;
		
		str_++;
	}
	
	return true;
}