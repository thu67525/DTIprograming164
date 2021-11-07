//file name : EP6Test3.c
//file source code

#include <stdio.h> //Library file

main(){
	char major[25];
	
	printf("Please, enter your major : ");
	//scanf("%s" , &major);
	gets(major);
	printf("------------------------\n");
	//printf("Welcome to : %s\n", major);
	printf("Welcome to : ");
	puts(major);
	puts("Wow Wow Wow");
}
