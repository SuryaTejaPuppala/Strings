//Strlen-String length
#include<stdio.h>
#include<string.h>

void main()
{
	char name[10];
	printf("Enter any name:");
	gets(name);
	int len;
	len = strlen(name);
	printf("The length of the string is %s is %d",name,len);
}
