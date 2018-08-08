#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double n;
	double p;
	double k;
	while( cin>>n>>p ){
		k = pow(p,1.0/n);
		printf( "%.0f\n",k);
	}
	return 0;
}
/*
输入n、p，求p的n次方根
2
16
3
27
7
4357186184021382204544

4
3
1234
 */