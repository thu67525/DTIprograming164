//file name : Ep5Test2.c
#include <stdio.h>

main( ){
	//declaration variable
	int age;
	char fname[25] = "somchai";
	const int num = 111;
	
	age = 60;
	
	printf("Wow        %d\n", age);
	printf("Wee  %s e\n", fname);
	
	age = 999;
	printf("%d", age);
}
