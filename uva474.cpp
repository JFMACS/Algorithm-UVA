#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int n;
	while( cin>>n ){
		int y = 0;
		double sum = 1;
		for( int i = 0 ; i < n ; i++ ){
			sum = sum /2;
			if( sum < 1 ){
				sum *= 10;
				y++;
			}
		}
		cout<<"2^-"<<n<<" = ";
		printf( "%.3f",sum);
		cout<<"e-"<<y<<endl;
	}
	return 0;
}
/*
输出2的-n次方的科学计数法

1
100
10000
1000000

2^-1 = 5.000e-1
2^-100 = 7.889e-31
2^-10000 = 5.012e-3011
2^-1000000 = 1.010e-301030
 */