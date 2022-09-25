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



//
//DS_ES_t  STACKArrBased_enuInit(Stack_t*   StackRef  )
//{
//	DS_ES_t Local_ErrorState  = ES_NOK    ;
//
//	if( 1 )
//	{
//
//		Local_ErrorState = ES_OK ;
//	}
//	else
//	{
//		Local_ErrorState = ES_NULLPOINTER ;
//	}
//	return Local_ErrorState ;
//}
//
//DS_ES_t  (*u8Stack_PUSH)(Stack_u8Data_t**  ptr2stackRef , u8 Cpy_u8Element);


DS_ES_t  u8Stack_PUSH(Data_t*   _u8StackRef , u8 Cpy_u8Element )
{

	DS_ES_t Local_ErrorState  = ES_NOK    ;

	_u8StackRef->ptr_u8StackEntery[_u8StackRef->_u32SP] = Cpy_u8Element;
	_u8StackRef->_u32SP++;

	printf("%d\n",_u8StackRef->_u32SP);


	return Local_ErrorState ;

}



DS_ES_t  u8Stack_POP(Data_t*   _u8StackRef , u8* Cpy_u8Element )
{

	DS_ES_t Local_ErrorState  = ES_NOK    ;

	*Cpy_u8Element = _u8StackRef->ptr_u8StackEntery[_u8StackRef->_u32SP];
	_u8StackRef->_u32SP--;


	return Local_ErrorState ;

}


//DS_ES_t  STACKArrBased_enuPup( Stack_t*   StackRef , int* ptrToElement )
//{
//	DS_ES_t Local_ErrorState  = ES_NOK    ;
//
//
//	return Local_ErrorState ;
//}
//
//DS_ES_t  STACKArrBased_enuGetState( Stack_t*   StackRef , int* ptrToElement )
//{
//	DS_ES_t Local_ErrorState  = ES_NOK    ;
//
//
//	return Local_ErrorState ;
//}
//
////   STACKArrBased_enuConstructor(&stack1 , u8_DataType , 100 )
//
//
//DS_ES_t  STACKArrBased_enuConstructor(Stack_t*  stackRef  , StackDataType_e  Cpy_enuStackEleType , StackMaxSize_e  Cpy_enuStackMaxSize )
//{
//	DS_ES_t Local_ErrorState  = ES_NOK    ;
//
//	if( stackRef != NULL)
//	{
//
//
//
//
//		Local_ErrorState  = ES_OK    ;
//	}
//	else
//	{
//		Local_ErrorState  = ES_NULLPOINTER    ;
//
//	}
//
//
//
//
//
//
//
//	//ptrToStack->GetState = STACKArrBased_enuGetState ;
//
//	return Local_ErrorState ;
//}


DS_ES_t  u8_STACKArrBased_enuConstructor(_u8Stack_t**  ptr2u8sStackRef   , StackMaxSize_e Cpy_enuStackCapacity )
{
	DS_ES_t Local_ErrorState  = ES_NOK    ;

	u8  Local_arr[Cpy_enuStackCapacity];


	_u8Stack_t   Local_u8Stack =
	{
			._u8StackData._u32SP=0  ,
			._u8StackData.ptr_u8StackEntery=Local_arr,
			._u8StackData.stack_capacity= Cpy_enuStackCapacity,

			.u8Stack_PUSH = u8Stack_PUSH,
			.u8Stack_POP  = u8Stack_POP

	};


	*ptr2u8sStackRef = &Local_u8Stack;



	return Local_ErrorState ;

}
