#include "swap.h"
void Swap(char *left, char * right)
{
    char buff;
    buff = *right;
    *right = *left;
    *left =buff;
}