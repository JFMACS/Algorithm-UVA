#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <math.h>

using namespace std;

int CtoI(char c){
    int n;
    if( c >= '0' && c <= '9' ){
        n = c - '0';
    }else{
        n = c - 'A' + 10;
    }
    return n;
}

char ItoC(int n){
    char c;
    if( n >= 0 && n <= 9 ){
        c = (char)('0'+n);
    }else{
        c = (char)('A'+n-10);
    }
    return c;
}

int main()
{
    char number[100];
    int A,B;
    int len,flag;
    long long n,m;
    while( cin>>A>>B>>number ){
        
        len = strlen(number);
        m = pow(A,1.0*(len-1));
        n = 0;
        flag = 1;
        for( int i = 0 ; i < len ; i++ ){
            if( CtoI(number[i]) >= A){
                flag = 0;
                break;
            }else{
                n += CtoI(number[i])*m;
                m /= A;
            }
        }
        cout<<number;
        if( flag ){
            cout<<" base "<<A<<" = ";
            m = 1;
            while( n > m ){
                m *= B;
            }
            while( n < m ){
                m /= B;
            }
            if( n == 0 ){
                cout<<"0";
            }
            while( m ){
                cout<<ItoC(n/m);
                n %= m;
                m /= B;
            }
            cout<<" base "<<B<<endl;
        }else{
            cout<<" is an illegal base "<<A<<" number"<<endl;
        }
    }
    return 0;
}
/*
进制的转换

2 10 10101
5 3 126
15 11 A4C

10101 base 2 = 21 base 10
126 is an illegal base 5 number
A4C base 15 = 1821 base 11
*/