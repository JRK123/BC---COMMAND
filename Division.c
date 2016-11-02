#include <stdio.h>
#include "husefulfunc.h"

Integer DivideIntegers(Integer a1, Integer b1) {
	Integer res, num, temp;
	int i = 0, j = 0, count = 0 ;
	i = a1.n;
	res.a = (int*)malloc(sizeof(int) * SIZE);
	res.n = 0;
	res.a[res.n] = count;
	temp.a = (int*)malloc(sizeof(int)*SIZE);
	temp.n = 0;
	num.a = (int *)malloc(sizeof(int)*SIZE);
	num.n = 0;

	while(j < a1.n) {
		num.a[num.n] = a1.a[j];
		num.n++;
		j++;
		
		temp = SubstractIntegers(num, b1);
		if(temp.sign != '-') {
			count++;
			while(temp.sign != '-') {
				num = temp;
				temp.sign = '+';		
				temp = SubstractIntegers(num, b1);
				if(temp.sign != '-') {
					count++;
				}
			}
			res.a[res.n] = count;
			res.n++;
			count = 0;
			temp.sign = '+';
			continue;
		}
		if(temp.sign == '-') {
			temp.sign = '+';
			continue;
		}

	}
	
	return res;


}

