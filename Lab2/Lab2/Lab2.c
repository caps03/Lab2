#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#pragma bss_seg(".myBSS")  
char* j;                     // stored in "my_data1" 

main() 
{
	//s2h starts in the bss section because it is uninitialized
	int i = func_one(j);
}
func_one(char * j)//this is for part one bss to stack
{
	printf("Enter a 12 letter word:\n");
	scanf_s("%s", j);//this will be on the stack
	return 0;
}