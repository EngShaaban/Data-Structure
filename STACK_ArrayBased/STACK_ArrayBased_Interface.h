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
	FALSE = 0 ,
	TRUE  ,

}Boolean_type;


#define MAXSTACK 3


typedef char Item_type ;

typedef struct stack_tag{
	u8         top     ;
	Item_type  entery[MAXSTACK];
}Stack_type;

Boolean_type    Empty ( Stack_type * ) ;
Boolean_type    Full (Stack_type *);
void            Initialize (Stack_type *);
void            Push ( Item_type, Stack_type *);
void            Pop (Item_type *, Stack_type *);

#endif /* STACK_ARRAYBASED_STACK_ ARRAYBASED_INTERFACE_H_ */
