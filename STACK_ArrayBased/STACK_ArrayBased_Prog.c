/*
 * STACK_ArrayBased_Prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Sky-pc
 */


#include"../DS_LIB/DS_ErrorStatus.h"
#include"../DS_LIB/STD_TYPES.h"

#include"STACK_ArrayBased_Private.h"
#include"STACK_ArrayBased_Interface.h"

Boolean_type    Empty ( Stack_type* sp )
{
	if( sp->top == 0 )
	{
		return TRUE ;
	}
	else
	{
		return FALSE ;
	}
}
Boolean_type    Full (Stack_type* sp)
{
	if( sp->top == MAXSTACK )
	{
		return TRUE ;
	}
	else
	{
		return FALSE ;
	}
}

void  Initialize (Stack_type* sp)
{
	if( (sp != NULL) )
	{
		sp->top =0 ;
	}
	else
	{
		//_report error.

	}

}

void Push ( Item_type elmnt, Stack_type* sp)
{
	if( (sp != NULL) && (STACK_NOT_FULL ))
	{

		sp->entery[sp->top] = elmnt  ;
		sp->top++;

	}
	else
	{
		//_report error.
	}

}

void   Pop (Item_type* valRef, Stack_type* sp)
{
	if( (sp != NULL)&&(valRef != NULL) &&(STACK_NOT_EMPTY ))
	{

		sp->top--;
		*valRef = sp->entery[sp->top]  ;

	}
	else
	{
		//_Report Error.
	}


}


