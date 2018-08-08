#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
#include <cstring>

using namespace std;

int CtoI( char ch ){
    int n;
    if( '0' <= ch && ch <= '9' ){
        n = ch - '0';
    }else{
        n = ch + 10 - 'A';
    }
    return n;
}

bool judge( char ch[] , int base ){
    for( int i = 0 ; i < strlen(ch) ; i++ ){
        if( CtoI(ch[i]) >= base ){
            return false;
        }
    }
    return true;
}

long long calc( char ch[] , int base ){
    long long n = 0;
    for( int i = 0 ; i < strlen(ch) ; i++ ){
        n *= base;
        n += CtoI( ch[i] );
    }
    //cout<<ch<<" "<<base<<"     "<<n<<endl;
    return n;
}

int main()
{
    char X[100],Y[100];
    while( cin>>X>>Y && X && Y ){
        int flag = 0;
        for( int i = 2 ; i < 37 ; i++ ){
            for( int j = 2 ; j < 37 ; j++ ){
                if( judge(X,i) && judge(Y,j) ){
                    if( calc(X,i) == calc(Y,j) ){
                        cout<<X<<" (base "<<i<<") = "<<Y<<" (base "<<j<<")"<<endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if( flag ){
                break;
            }
        }
        if( !flag ){
            cout<<X<<" is not equal to "<<Y<<" in any base 2..36"<<endl;
        }
    }
    return 0;
}
/*
给出两个数字，求出分别在怎样的进制(2,36)下两数相等

12 5
10 A
12 34
123 456
1 2
10 2

12 (base 3) = 5 (base 6)
10 (base 10) = A (base 11)
12 (base 17) = 34 (base 5)
123 is not equal to 456 in any base 2..36
1 is not equal to 2 in any base 2..36
10 (base 2) = 2 (base 3)
 */