#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;
 
int main()
{
    int number[105];
    int sum[110];
    memset(sum,0,sizeof(sum));
    int size = 0;
    char ch;
    while( 1 ){
        int i = 0,k = 0;
        int buf = 0;
        while( ch = getchar() ){
            if( ch == '\n' ){
                break;
            }
            number[i] = ch - '0';
            i++;
        }
        if( i == 1 && number[0] == 0 ){
            for( i = size-1 ; i >= 0 ; i-- ){
                cout<<sum[i];
            }
            cout<<endl;
            break;
        }
        for( int j = i-1 ; j >= 0 ; j-- ){
            buf += (sum[k] + number[j]);
            sum[k] = buf%10;
            buf /= 10;
            k++;
        }

        while( buf != 0 ){
            buf += sum[k];
            sum[k] = buf%10;
            buf /= 10;
            k++;
        }

        if( k > size ){
            size = k;
        }

    }
    return 0;
}
/*
超长数字的加法

123456789012345678901234567890
123456789012345678901234567890
123456789012345678901234567890
0

370370367037037036703703703670
 */