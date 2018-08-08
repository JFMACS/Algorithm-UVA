#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	int a,b,c,d;
	for( a = 6 ; a < 201 ; a++ ){
		for( b = 2 ; b < a ; b++ ){
			for( c = b ; c < a ; c++ ){
				for( d = c ; d < a ; d++ ){
					if( a*a*a == b*b*b + c*c*c + d*d*d ){
						cout<<"Cube = "<<a<<", Triple = ("<<b<<","<<c<<","<<d<<")"<<endl;
					}
				}
			}
		}
	}
	return 0;
}
/*
计算完美立方数，即 a*a*a == b*b*b + c*c*c + d*d*d

Cube = 6, Triple = (3,4,5)
Cube = 12, Triple = (6,8,10)
Cube = 18, Triple = (2,12,16)
Cube = 18, Triple = (9,12,15)
Cube = 19, Triple = (3,10,18)
Cube = 20, Triple = (7,14,17)
Cube = 24, Triple = (12,16,20)
 */