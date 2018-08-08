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
    char number[8];
    int A,B;
    int len,n,m,flag;
    while( cin>>number>>A>>B ){
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

        if( n >= pow( B,1.0*(7) ) ){
            flag = 0;
        }

        if( n == 0 ){
            cout<<"      0"<<endl;
            continue;
        }

        if( flag ){
            m = pow(B,1.0*(6));
            while( n < m ){
                cout<<" ";
                m /= B;
            }
            while( m ){
                cout<<ItoC(n/m);
                n %= m;
                m /= B;
            }
            cout<<endl;
        }else{
            cout<<"  ERROR"<<endl;
        }
    }
    return 0;
}
/*
进制的转换

1111000  2 10
1111000  2 16
2102101  3 10
2102101  3 15
  12312  4  2
     1A 15  2
   ABCD 16 15
     03 13 10

    120
     78
   1765
    7CA
  ERROR
  11001
   D071
      3
 */
