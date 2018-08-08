#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int number[10000];
    int flag[10000];
    int count=0,n;
    while( cin>>n ){
        number[count] = n;
        flag[count] = 0;
        count++;
        if( (getchar()) == '\n' ){
            break;
        }
    }
    for( int i = 0 ; i < count ; i++ ){
        if( flag[i] == 0 ){
            n = 0;
            for( int j = i ; j < count ; j++ ){
                if( number[j] == number[i] ){
                    flag[j] = 1;
                    n++;
                }
            }
            cout<<number[i]<<" "<<n<<endl;
        }
    }
    return 0;
}
/*
输入一串数字，输出出现的数字及其出现的次数

3 1 2 2 1 3 5 3 3 2

3 4
1 2
2 3
5 1
 */