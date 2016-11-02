#ifndef __REV__
#define __REV__
#include<stdio.h>
#include "integer.h" 
#endif
Integer Reverse(Integer z) {
	Integer l;
/*	if(z.sign == '-') 
		l.sign == '-';
	else
		l.sign == '+';*/
	l.n = 0;
	int i = 0;
	l.a = (int *)malloc(sizeof(int) * SIZE);
	while(z.n != 0 ) {
		l.a[i] = z.a[z.n - 1];
		i++;
		z.n--;
		l.n++;
	}
	return l;
}


void PrintInteger(Integer a) {
	int k = 0;
	if(a.sign == '-')
		printf("%c", '-');
	while(k < a.n) {
		printf("%d", a.a[k]);
		k++;
	}
	printf("\n");

}
//#endif
