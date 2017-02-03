#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#pragma bss_seg(".myBSS")  
char* j;                     // stored in "my_data1" 

main() 
{
	//Part One
	int i = func_one(j);

	//Part Two
	char *heap = malloc(13);//this is on the heap
	heap = "ABCDEFGHIJKL";
	char *data = heap;//in the data section
}
func_one(char * j)//this is for part one bss to stack
{
	printf("Enter a 12 letter word:\n");
	scanf_s("%s", j);//this will be on the stack
	return 0;
}