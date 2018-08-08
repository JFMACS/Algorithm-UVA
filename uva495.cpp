#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int num[5001][1100];

int main()
{
    int size[5001];
    num[0][0] = 0;
    num[1][0] = 1;
    size[0] = size[1] = 1;
    for( int i = 2 ; i < 5001 ; i++ ){
        memset(num[i],0,sizeof(num[i]));
        int k = size[i-1];
        int buf = 0;
        int j;
        for( j = 0 ; j < k ; j++ ){
            buf += (num[i-1][j] + num[i-2][j]);
            num[i][j] = buf%10;
            buf /= 10;
        }
        if( buf != 0 ){
            num[i][j] = buf;
            j++;
        }
        size[i] = j;
    }

    int n;
    while( cin>>n ){
        cout<<"The Fibonacci number for "<<n<<" is ";
        for( int i = size[n]-1 ; i >= 0 ; i-- ){
            cout<<num[n][i];
        }
        cout<<endl;
    }
    return 0;
}

/*
输出费那波切数列

5
7
11

The Fibonacci number for 5 is 5
The Fibonacci number for 7 is 13
The Fibonacci number for 11 is 89

*/
