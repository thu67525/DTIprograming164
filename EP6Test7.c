//file name : EP6Test7.c
//file source code

#include <stdio.h> //Library file

main(){
	int x = 10;
	
	int y = 99;
	
	x = x + 1;
	printf("%d\n" , x);  //11
	
	//y = y + 1; ok --> 100
	//y++; ok --> 100
	++y;
	printf("%d\n", y);  //100
	//--yy; ok --> 99
	y--;
	printf("%d\n", y);  //99
}
