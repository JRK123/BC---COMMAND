
#include<stdlib.h>
#include "husefulfunc.h"
Integer SubstractIntegers(Integer n1, Integer n2) {
	int i, j, c, r = 0, temp = 0;
	Integer res;
	res.sign = '+';
	i = n1.n;
	j = n2.n;
	c = n1.n - n2.n;
	res.a = (int *)malloc(sizeof(int )*1024);
	res.n = res.m = 0;
	if(c == 0) {
		

		int k, temp = 0;
		res.n = 0;
		while(n1.n > 0) {
			if(n1.a[n1.n - 1] >= (n2.a[n2.n - 1] + temp)) {
				k = n1.a[n1.n - 1] -(n2.a[n1.n - 1] + temp);	
				res.a[res.n] = k;
				temp = 0;	
				n1.n--;
				n2.n--;
				res.n++;
				continue;
			}
			else if(n1.a[n1.n - 1] < (n2.a[n2.n -1] + temp)) {
				k = (n1.a[n1.n - 1] + 10) - (n2.a[n2.n - 1] + temp);
				res.a[res.n] = k;
				temp = 1;
				n1.n--;
				n2.n--;
				res.n++;
				continue;
			}
			n1.n = i;
			n2.n = j;
		}
		if(temp == 1) {
	//		res.sign = '-';
	
			r = res.n;
	
			while(res.n  - 1) {
				res.a[res.n - 1] = 9 - res.a[res.n - 1];
				res.n--;
			}	
			res.a[res.n - 1] = 10 - res.a[res.n - 1];
			res.n = r;
			res = Reverse(res);
			res.sign = '-';
			return res;
		}
		else if(temp == 0) {
			if(n1.n == 1) {
			}
				
			else {
				if(res.a[res.n - 1] == 0){}
				//	res.n--;
				else {
				}
					
			}
		
			res = Reverse(res);
			return res;
		}
	}
	if(c > 0) {
		int k, temp = 0;
		res.n = 0;
		while(n2.n > 0) {
			if(n1.a[n1.n - 1] >= (n2.a[n2.n - 1] + temp)) {
				k = n1.a[n1.n - 1] -(n2.a[n2.n - 1] + temp);	
				res.a[res.n] = k;
				temp = 0;	
				n1.n--;
				n2.n--;
				res.n++;
				continue;
			}
			else if(n1.a[n1.n - 1] < (n2.a[n2.n -1] + temp)) {
				k = (n1.a[n1.n - 1] + 10) - (n2.a[n2.n - 1] + temp);
				res.a[res.n] = k;
				temp = 1;
				n1.n--;
				n2.n--;
				res.n++;
				continue;
			}
		}
		if(temp == 1) {
			k = n1.a[n1.n - 1] - temp;
			res.a[res.n] = k;
			n1.n--;
			res.n++;
			while(n1.n) {
				res.a[res.n] = n1.a[n1.n - 1];
				res.n++;
				n1.n--;
			}
			if(res.a[res.n - 1] == 0)
				res.n--;	
		
		}
		else if(temp == 0) {
			while(n1.n) {
				res.a[res.n] = n1.a[n1.n - 1];
				res.n++;
				n1.n--;
			}
			if(n1.n == 1) {
			}
				
			else {
				if(res.a[res.n - 1] == 0)
					res.n--;
				else {
				
				}
				
			}
		}
		res = Reverse(res);
		return res;
	}
	if(c < 0) {
		Integer n3;
		n3 = SubstractIntegers(n2, n1);
		n3.sign = '-';
		return n3;
	}
}
