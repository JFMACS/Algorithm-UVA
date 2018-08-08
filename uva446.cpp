#include <iostream>
#include <cstdio>
#include <string>
#include <math.h>

using namespace std;

int print( char H[4] ){

    int number = 0;
    int n = 0;
    for( int i = 0 ; i < 3 ; i++ ){
        if( H[i] >= '0' && H[i] <= '9' ){
            n = H[i] - '0';
            number *= 16;
            number += n;
        }else if( H[i] >= 'A' && H[i] <= 'F' ){
            n = H[i] - 'A' + 10;
            number *= 16;
            number += n;
        }else{
            break;
        }
    }

    cout<<"0";
    n = number;
    int m = 2048;
    while( m ){
        cout<<n/m;
        n %= m;
        m /= 2;
    }
    return number;
}

int main()
{
    int n;
    cin>>n;
    char H1[4];
    char H2[4];
    char sign;
    int n1,n2;
    for( int i = 0 ; i < n ; i++ ){
        H1[0] = H2[0] = '\0';
        cin>>H1>>sign>>H2;
        n1 = print(H1);
        cout<<" "<<sign<<" ";
        n2 = print(H2);
        if( sign == '-' ){
            cout<<" = "<<n1-n2<<endl;
        }else{
            cout<<" = "<<n1+n2<<endl;
        }
    }
    return 0;
}
/*
16进制的加减法，将输入的数以二进制输出，将结果以十进制输出

2
A + 3
AAA + BBB

0000000001010 + 0000000000011 = 13
0101010101010 + 0101110111011 = 5733
 */
