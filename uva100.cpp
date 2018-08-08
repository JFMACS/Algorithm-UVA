#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
#include <string.h>

using namespace std;
int main(){
	long a(0),b(0);
	while(cin>>a>>b){
		long max = 0;
		long i = (a>b)?b:a;
		long j = a + b - i;
		for( long n = i ; n <= j ; n++ ){
			long count = 1;
			long k = n;
			while( k != 1 ){
				if( k%2 == 1 ){
					k = 3*k + 1;
				}else{
					k /= 2;
				}
				count++;
			}
			if( max < count ){
				max = count;
			}
		}
		cout<<a<<" "<<b<<" "<<max<<endl;
	}
	return 0;
}
/*
3n+1问题

1 10
100 200
201 210
900 1000

1 10 20
100 200 125
201 210 89
900 1000 174
 */