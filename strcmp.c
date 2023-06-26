//strcmp-string comparison
#include<stdio.h>
#include<string.h>

void main()
{
	char str[10] ="Sahithi",str1[10] ="Thrisha";
	int s;
    s = strcmp(str,str1);
	if(s==0)
	printf("\nBoth strings are equal");
	else if(s>0)
	printf("\nString 1 %s is greater",str);
	else
	printf("\nString 2 %s is greater",str1);

}
