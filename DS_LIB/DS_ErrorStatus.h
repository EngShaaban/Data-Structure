

#ifndef STACK_ERRORSTATUS_H_
#define STACK_ERRORSTATUS_H_

typedef enum
{
	ES_OK   =  0  ,
	ES_NOK        ,
	ES_NULLPOINTER,

}DS_ES_t;


typedef enum
{
	STACK_STATE_FULL   =  0    ,
	STACK_STATE_NOTFULL        ,
	STACK_STATE_UNDEFINED

}DS_STACK_STATE_t;






#endif /* STACK_ERRORSTATUS_H_ */
