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




DS_ES_t  STACKArrBased_enuInit(Stack_t*   StackRef  )
{
	DS_ES_t Local_ErrorState  = ES_NOK    ;

	if( 1 )
	{

		Local_ErrorState = ES_OK ;
	}
	else
	{
		Local_ErrorState = ES_NULLPOINTER ;
	}
	return Local_ErrorState ;
}


DS_ES_t  STACKArrBased_enuPush(Stack_t*   StackRef , int* ptrToElement )
{

	DS_ES_t Local_ErrorState  = ES_NOK    ;

	if(1)
	{
		//StackRef->



		Local_ErrorState = ES_OK ;
	}
	else
	{
		Local_ErrorState = ES_NULLPOINTER ;
	}
	return Local_ErrorState ;

}


DS_ES_t  STACKArrBased_enuPup( Stack_t*   StackRef , int* ptrToElement )
{
	DS_ES_t Local_ErrorState  = ES_NOK    ;


	return Local_ErrorState ;
}

DS_ES_t  STACKArrBased_enuGetState( Stack_t*   StackRef , int* ptrToElement )
{
	DS_ES_t Local_ErrorState  = ES_NOK    ;


	return Local_ErrorState ;
}

//   STACKArrBased_enuConstructor(&stack1 , u8_DataType , 100 )


DS_ES_t  STACKArrBased_enuConstructor(Stack_t*  stackRef  , StackDataType_e  Cpy_enuStackEleType , StackMaxSize_e  Cpy_enuStackMaxSize )
{
	DS_ES_t Local_ErrorState  = ES_NOK    ;

	if( stackRef != NULL)
	{
		if( Cpy_enuStackEleType == u8_DataType  )
		{
			u8 arr[STACK1_MAXSIZE];

			stackRef->vidPtrStackEntery = arr;

#if()
#elif()
#endif

		}




		Local_ErrorState  = ES_OK    ;
	}
	else
	{
		Local_ErrorState  = ES_NULLPOINTER    ;

	}







	//ptrToStack->GetState = STACKArrBased_enuGetState ;

	return Local_ErrorState ;
}
