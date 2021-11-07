//file name : EP6Test6.c
//file source code

#include <stdio.h> //Library file

main(){
	char first_char_fname;
	
	printf("Enter your first character of your name : ");
	first_char_fname = getche();
	printf("------------------------\n");
	printf("You enter : %c\n", first_char_fname);
	putchar(first_char_fname);
}
