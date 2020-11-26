#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]="hello";
    char s2[10]="hello";
    if(strcmp(s1,s2)==0)
    printf("Both the strings are equal");
    else
    {
        printf("Both strings are not equal");
    }
    
}