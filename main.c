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

_u8Stack_t* _prt2u8Stack1 =NULL   ;


int main(void)
{
	u8 val = 0 ;

	//DS_ES_t  u8_STACKArrBased_enuConstructor(_u8Stack_t**  ptr2u8sStackRef   , StackMaxSize_e Cpy_enuStackCapacity , StackPointerType_e Cpy_enuSP)

	printf("val=%d\n",val);

	u8_STACKArrBased_enuConstructor(&_prt2u8Stack1 , 100 );

	_prt2u8Stack1->u8Stack_PUSH(&_prt2u8Stack1->_u8StackData , 30);

	_prt2u8Stack1->u8Stack_POP(&_prt2u8Stack1->_u8StackData , &val);

	printf("val=%d\n",val);

}

