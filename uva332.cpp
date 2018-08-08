#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>

using namespace std;

int getDiv( int a , int b ){
    return a%b?getDiv(b,a%b):b;
}

int main()
{
    int n;
    char x[15];
    int Case = 0;
    while( cin>>n ){
        if( n == -1 ){
            break;
        }
        cin>>x;
        Case++;
        int a=0,b=1;
        int temp=1;
        for( int i = 2 ; x[i] ; ++i ){
            a *= 10;
            a += (x[i] - '0');
            b *= 10;
            if( i <= n+1 ){
                temp *= 10;
            }
        }
        if( n != 0 ){
            a -= (a/temp);
            b -= (b/temp);
        }
        int div = getDiv(a,b);
        cout<<"Case "<<Case<<": "<<a/div<<"/"<<b/div<<endl;
    }
    return 0;
}
/*
将循环小数换算成分数

2 0.318
1 0.3
2 0.09
6 0.714285
-1

Case 1: 7/22
Case 2: 1/3
Case 3: 1/11
Case 4: 5/7
 */