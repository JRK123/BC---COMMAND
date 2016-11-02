/* This file contains the type declaration of stack
 * and prototypes of all stack's functions.
 * We say that these function prototypes are "stack interface"
 */
//#ifndef __INTEGER__
//#define __INTEGER__
#include "integer.h"
//#endif


#define MAX 128
typedef struct stack {
	Integer a[MAX];
	int i;
}stack;
/* these prototypes help us avoid the compiler warnings,
 * in any code which calls these functions. 
 */
void push(stack *s, Integer num);
Integer pop(stack *s);
int empty(stack *s);
int full(stack *s);
void init(stack *s);


