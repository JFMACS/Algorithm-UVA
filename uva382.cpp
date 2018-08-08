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
    int input[100];
    int count = 0;
    int a;
    while( cin>>a && a != 0 ){
        input[count++] = a;
    }
    cout<<"PERFECTION OUTPUT"<<endl;
    for( int i = 0 ; i < count ; i++ ){
        printf("%5d  ",input[i]);
        if( input[i] == 1 ){
            cout<<"DEFICIENT"<<endl;
            continue;
        }
        int sum = 1;
        for( int j = 2 ; j <= input[i]/2 ; j++ ){
            if( input[i] % j == 0 ){
                sum += j;
            }
        }
        if( sum == input[i] ){
            cout<<"PERFECT"<<endl;
        }
        if( sum < input[i] ){
            cout<<"DEFICIENT"<<endl;
        }
        if( sum > input[i] ){
            cout<<"ABUNDANT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
/*
计算完美数、过剩数、亏数
完美数指所有真因数和等于该数

15 28 6 56 60000 22 496 0

PERFECTION OUTPUT
   15 DEFICIENT
   28 PERFECT
    6 PERFECT
   56 ABUNDANT
60000 ABUNDANT
   22 DEFICIENT
  496 PERFECT
END OF OUTPUT
 */