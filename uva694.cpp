#include <iostream>
#include <math.h>
#include <cstdio>
#include <string.h>

using namespace std;
int main(){
	long a(0),limit(0);
	int line = 0;
	while( cin>>a>>limit && ( a > 0 || limit > 0 ) ){
		line++;
		int count = 1;
		if( a == 1 ){
			break;
		}
		long k = a;
		while( k != 1 ){
			if( k%2 == 1 ){
				k = 3*k + 1;
			}else{
				k /= 2;
			}
			if( k > limit ){
				break;
			}
			count++;
		}
		cout<<"Case "<<line<<": A = "<<a<<", limit = "<<limit<<", number of terms = "<<count<<endl;
	}
	return 0;
}
/*
3n+1问题，计算最后一个为2号，最小的步数

3 100
34 100
75 250
27 2147483647
101 304
101 303
-1 -1

Case 1: A = 3, limit = 100, number of terms = 8
Case 2: A = 34, limit = 100, number of terms = 14
Case 3: A = 75, limit = 250, number of terms = 3
Case 4: A = 27, limit = 2147483647, number of terms = 112
Case 5: A = 101, limit = 304, number of terms = 26
Case 6: A = 101, limit = 303, number of terms = 1
 */