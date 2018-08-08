#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    while( cin >> n && n ){
        for( int i = 1 ; i < n ; i++ ){
            int k = 0;
            for( int j = 1 ; j < n ; j++ ){
                k = (k+i)%j;
            }
            if( k == 11 ) {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
/*
约瑟夫环问题，输入k(13,100)，要求最后淘汰的是13号

17
0

7
 */