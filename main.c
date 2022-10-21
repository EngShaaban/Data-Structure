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

void Display(Item_type  c )
{
	printf("c is:%d\n",c);
}

int main(void)
{

	char val =0 ;

	char c = 11 ;

	char itm = 0 ;

	Stack_type stack;

	Initialize (&stack);

	printf("________push_________\n");

	while(!Full(&stack))
	{
		Push ( c, &stack);

		printf("c=%d\n",c);
		c += 11 ;

	}

	printf("_________top#1_________\n");

	 Top(&stack , &itm);

	 printf("itm is:%d\n",itm);

	 itm = 0 ;

	printf("_________travers#1_________\n");

	TraverseStack( &stack , Display );

	printf("_________Clear________\n");

	Clear(&stack);


	printf("_________pop_________\n");

	while(!Empty(&stack))
	{


		Pop (&val, &stack);

		printf("val=%d\n",val);


	}

	printf("_________travers#2_________\n");

	TraverseStack( &stack , Display );


	printf("_________top#2_________\n");

		 Top(&stack , &itm);

		 printf("itm is:%d\n",itm);




}

