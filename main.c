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

	char c = 11 ;

	Stack_type stack;

	Initialize (&stack);

	printf("________push_________\n");

	while(!Full(&stack))
	{
		Push ( c, &stack);

		printf("c=%d\n",c);
		c += 11 ;

	}

	printf("_________pop_________\n");

	while(!Empty(&stack))
		{


		Pop (&val, &stack);

		printf("val=%d\n",val);


		}







}

