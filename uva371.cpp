#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
#include <string.h>

using namespace std;
int main(){
	long a(0),b(0);
	while( cin>>a>>b && ( a != 0 || b != 0 ) ){
		long max = 0;
		long i = (a>b)?b:a;
		long j = a + b - i;
		long result = i;
		for( long n = i ; n <= j ; n++ ){
			long count = 0;
			long k = n;
			if( k == 1 ){
				count = 3;
			}
			while( k != 1 ){
				if( k%2 == 1 ){
					k = 3*k + 1;
				}else{
					k /= 2;
				}
				count++;
			}
			if( max < count ){
				result = n;
				max = count;
			}
		}
		cout<<"Between "<<i<<" and "<<j<<", "<<result<<" generates the longest sequence of "<<max<<" values."<<endl;
	}
	return 0;
}
/*
3n+1问题，求在一定范围中，根据3n+1规则能产生最多随机数的数

1 20
35 55
0 0

Between 1 and 20, 18 generates the longest sequence of 20 values.
Between 35 and 55, 54 generates the longest sequence of 112 values.
 */