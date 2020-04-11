#include "revert_string.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void RevertString(char *str)
{
	int i, lenght = strlen(str);
    char*newstr = (char*) calloc(lenght, sizeof(char));
    for(i=lenght-1;i>-1;i--)
    {
        newstr[lenght-i-1]= str[i];
    }
    strcpy(str,newstr);

}

