#include<stdio.h>
#include<string.h>
int main()
{
    char string[1000];
    printf("Enter string",string);
    gets(string);
    printf("String in uppercase %s",strupr(string));
}