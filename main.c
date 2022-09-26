/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Sky-pc
 */


#include<stdio.h>

#include"DS_LIB/DS_ErrorStatus.h"
#include"DS_LIB/STD_TYPES.h"

#include"STACK_ArrayBased/STACK_ArrayBased_Interface.h"

int main(void)
{

	char val =0 ;

	Stack_type stack;

	Initialize (&stack);

	printf("________push_________\n");
	printf("sp = %d\n",stack.top);
	Push ( 10, &stack);

	printf("sp = %d\n",stack.top);
	Push ( 11, &stack);

	printf("sp = %d\n",stack.top);
	Push ( 22, &stack);


	printf("sp = %d\n",stack.top);
	Push ( 55, &stack);

	printf("sp = %d\n",stack.top);
		Push ( 66, &stack);

	printf("________pop_________\n");

	Pop (&val, &stack);
	printf("val=%d\n",val);
	printf("sp = %d\n",stack.top);


	Pop (&val, &stack);
	printf("val=%d\n",val);
	printf("sp = %d\n",stack.top);

	Pop (&val, &stack);
	printf("val=%d\n\n",val);
	printf("sp = %d\n",stack.top);



	Pop (&val, &stack);
	printf("val=%d\n\n",val);
	printf("sp = %d\n",stack.top);

	Pop (&val, &stack);
	printf("val=%d\n\n",val);






}

