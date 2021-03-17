#include "Number.h"
#include <cstring>
Number::Number(const char* value, int base)
{
	strcpy(this->value,value);
	this->base = base;
}
Number::int  GetBase()
{
    
}
void SwitchBase(int newBase);
{
    int c = 0;
    while(c < strlen(this->value)) 
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}