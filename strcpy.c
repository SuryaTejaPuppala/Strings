//strcpy-string copy
#include<stdio.h>
#include<string.h>

void main()
{
	char str[10],str1[10];
	printf("Enter the two string name:\n");
	gets(str);
	gets(str1);
    strcpy(str,str1);
	puts(str);
	
}
