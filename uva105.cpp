#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
#include <math.h>

using namespace std;

int skyline[ 10005 ] = {0};

int main()
{
	int L,H,R; 
	while( cin>>L>>H>>R && L && H && R ){
		for ( int i = L ; i <= R ; ++ i ){
			skyline[i] = skyline[i]>H?skyline[i]:H;
		}
	}
	int s = 0,e = 0;
	while( !skyline[s] ){
		s++;
	}
	cout<<s<<" "<<skyline[s];
	for( int i = s+1 ; i <= 10001 ; i++ ){
		if( skyline[i] != skyline[i-1] ){
			if ( skyline[i-1] < skyline[i] ){
				cout<<" "<<i<<" "<<skyline[i];
			}
			else{
				cout<<" "<<i-1<<" "<<skyline[i];
			}
		}
	}
	cout<<endl;
	return 0;
}
/*
输入大楼的位置与高度，计算天际线

1 11 5
2 6 7
3 13 9
12 7 16
14 3 25
19 18 22
23 13 29
24 4 28

1 11 3 13 9 0 12 7 16 3 19 18 22 3 23 13 29 0
 */