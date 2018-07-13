#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
/*
This is the main method
It's the entry point of our program
*/
int main(int argc, char* argv[]){
	int argv1, argv2;
	char operator;
	printf("number of arguments passed: %d\n", argc);
	printf("first argument: %s\n", argv[0]);
	if(argc=4){
		argv1 = atoi(argv[2]);
		argv2 = atoi(argv[3]);
		operator = (*argv[1]);
		
		switch (operator){
			case '+':printf("%d + %d = %d\n", argv1, argv2, add(argv1, argv2));
			break;
			case '-':printf("%d - %d = %d\n", argv1, argv2, subtract(argv1, argv2));
			break;
			case 'x':printf("%d * %d = %d\n", argv1, argv2, multiply(argv1, argv2));
			break;
			case '/':printf("%d / %d = %d rem %d\n",argv1, argv2, divide(argv1, argv2),  modulus(argv1, argv2));
			break;
			default:
            		printf("Error!");
			}
	}
	return 0;
}









