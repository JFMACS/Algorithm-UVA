#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    while( cin >> n && n ){
        for( int i = 1 ; i ; i++ ){
            int k = 0;
            for( int j = 1 ; j < n ; j++ ){
                k = (k+i)%j;
            }
            if( k == 0 ) {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
/*
约瑟夫环问题，输入k(3,150)，要求最后淘汰的是2号

12
0

16
 */