#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;
 
int main()
{
    int n;
    int result[800];
    while( cin>>n && n != 0 ){
        int j = 0;
        int buf;
        result[j] = 1;
        for( int i = 1 ; i <= n ; i++ ){
            buf = 0;
            for( int k = 0 ; k <= j ; k++ ){
                buf += result[k]*i;
                result[k] = buf%10;
                buf /= 10;
            }
            while( buf != 0 ){
                j++;
                result[j] = buf%10;
                buf /= 10;
            }
        }
        cout<<n<<"! --";
        for( int i = 0 ; i < 10 ; i++ ){
            int count = 0;
            for( int k = 0 ; k <= j ; k++ ){
                if( result[k] == i ){
                    count++;
                }
            }
            if( i==0 || i==5 ){
                cout<<endl<<"   ";
            }else{
                cout<<"    ";
            }
            cout<<"("<<i<<")"<<setfill(' ')<<setw(5)<<count;

        }
        cout<<endl;
    }
    return 0;
}
/*
计算级数的每个数字出现的次数

3
8
100
0

3! --
   (0)    0    (1)    0    (2)    0    (3)    0    (4)    0
   (5)    0    (6)    1    (7)    0    (8)    0    (9)    0
8! --
   (0)    2    (1)    0    (2)    1    (3)    1    (4)    1
   (5)    0    (6)    0    (7)    0    (8)    0    (9)    0
100! --
   (0)   30    (1)   15    (2)   19    (3)   10    (4)   10
   (5)   14    (6)   19    (7)    7    (8)   14    (9)   20
 */