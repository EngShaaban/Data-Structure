/*
 * STACK_ArrayBased_Interface.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Sky-pc
 */

#ifndef STACK_ARRAYBASED_STACK_ARRAYBASED_INTERFACE_H_
#define STACK_ARRAYBASED_STACK_ARRAYBASED_INTERFACE_H_


typedef enum
{
	u8_DATATYBE      = 0   ,   //_Valid to use with stack up-to 0 ......255                  location Safely.
	u16_DATATYBE           ,   //_Valid to use with stack up-to 0 ......65535                location Safely.
	u32_DATATYBE           ,   //_Valid to use with stack up-to 0 ......4294967295           location Safely.
    u64_DATATYBE               //_Valid to use with stack up-to 0 ......18446744073709551615 location Safely.

}StackPointerType_e;


typedef enum
{
	u8_MAXSIZE   = 0   ,   //_Valid to use with stack up-to 0 ......255                  location.
	u16_MAXSIZE        ,   //_Valid to use with stack up-to 0 ......65535                location.
	u32_MAXSIZE        ,   //_Valid to use with stack up-to 0 ......4294967295           location.
    u64_MAXSIZE            //_Valid to use with stack up-to 0 ......18446744073709551615 location.

}StackMaxSize_e;


typedef enum
{
	u8_DataType   = 0   ,
	u16_DataType        ,
	u32_DataType        ,
	u64_DataType        ,

	s8_DataType         ,
	s16_DataType        ,
	s32_DataType        ,
	s64_DataType        ,

	f32_DataType        ,
	f64_DataType        ,
	f128_DataType       ,

}StackDataType_e;

#define STACK1_MAXSIZE   100

typedef struct stack
{
	StackPointerType_e      stackPtr          ;

	void*                  vidPtrStackEntery        ;

	StackDataType_e         stackEntry[1]     ;

//	DS_ES_t       (*Init)( u8  u8_maxStackSize )         ;
//	DS_ES_t       (*Push)( Stack_t*   StackRef  , int* ptrToElement )   ;
//	DS_ES_t       (*Pup)(  Stack_t*   StackRef  , int* ptrToElement )    ;

	DS_ES_t       (*GetState)(DS_STACK_STATE_t*  State  );

}Stack_t;

DS_ES_t  STACKArrBased_enuConstructor(Stack_t*  stackRef  , StackDataType_e  Cpy_enuStackEleType , StackMaxSize_e  Cpy_enuStackMaxSize );


#endif /* STACK_ARRAYBASED_STACK_ ARRAYBASED_INTERFACE_H_ */
