// Can you vote in c.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a;
	printf_s("Give me your age\n");
	scanf_s("%d", &a);
	if(a>=18){
		printf_s("You can vote\n");
	}
	else {
		printf_s("Can't vote\n");
	}
    return 0;
}

