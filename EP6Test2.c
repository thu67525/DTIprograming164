//file name : EP6Test2.c
//file source code

#include <stdio.h> //Library file

main(){
	
	//declaration variable
	char std_name[50];  //snake case
	int stdAge;  //camel case
	
	printf("Enter name : ");
	scanf("%s" , &std_name );  //amphuresand
	printf("Enter age : ");
	scanf("%d" , &stdAge );
	printf("------------------------\n");
	printf("Hello ..... %s\n", std_name );
	printf("Wow,you  ..... %d years old\n", stdAge);
}
