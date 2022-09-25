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


typedef struct
{
	u8*                   ptr_u8StackEntery ;
	StackMaxSize_e        stack_capacity    ;
	u32                   _u32SP            ;


}Data_t;

typedef struct u8_stack
{

	Data_t   _u8StackData        ;

	//DS_ES_t  STACKArrBased_enuPush(Stack_t*   StackRef , int* ptrToElement )

	DS_ES_t  (*u8Stack_PUSH)(Data_t*  ptr2stackRef , u8 Cpy_u8Element);
	DS_ES_t  (*u8Stack_POP)(Data_t*  ptr2stackRef , u8* Cpy_u8Element);


}_u8Stack_t;
DS_ES_t  u8_STACKArrBased_enuConstructor(_u8Stack_t**  ptr2u8sStackRef   , StackMaxSize_e Cpy_enuStackCapacity);
//DS_ES_t  u8_STACKArrBased_enuConstructor(Stack_u8Data_t**  stackRef   , StackMaxSize_e Cpy_enuStackCapacity , StackPointerType_e Cpy_enuSP );


///DS_ES_t  STACKArrBased_enuConstructor(Stack_t*  stackRef  , StackDataType_e  Cpy_enuStackEleType , StackMaxSize_e  Cpy_enuStackMaxSize );


#endif /* STACK_ARRAYBASED_STACK_ ARRAYBASED_INTERFACE_H_ */
