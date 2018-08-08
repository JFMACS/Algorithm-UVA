#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	int n,i,j;
	int contain,contained;
	bool flag = false;
	while( cin>>n && n ){
		if( flag ){
			cout<<endl;
		}
		flag = true;
		contain = 0;
		contained = 0;
		double near,far;
		for( i = 0 ; i < n ; i++ ){
			for( j = 0 ; j < n ; j++ ){
				near = i*i + j*j - n*n + n - 0.25;
				far = near + 2*(i+j+1);
				if( near < 0 && far <= 0 ){
					contained++;
				}
				if( near < 0 && far > 0 ){
					contain++;
				}
			}
		}
		cout<<"In the case n = "<<n<<", "<<contain*4<<" cells contain segments of the circle."<<endl;
		cout<<"There are "<<contained*4<<" cells completely contained in the circle."<<endl;
	}
	return 0;
}
/*
网格中的一个圆，计算圆包括的方格数和穿过的方格数

3
4

In the case n = 3, 20 cells contain segments of the circle.
There are 12 cells completely contained in the circle.

In the case n = 4, 28 cells contain segments of the circle.
There are 24 cells completely contained in the circle.
 */