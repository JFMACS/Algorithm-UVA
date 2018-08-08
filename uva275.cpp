#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    int x,y;
    int result[3001];
    int left[3001];
    while( cin>>x>>y ){
        int flag = 0;
        if( x == 0 && y == 0){
            break;
        }
        cout<<".";
        for( int i = 0 ; i < 3001 ; i++ ){
            x *= 10;
            result[i] = x/y;
            x = x%y;
            left[i] = x;
            if( x == 0 ){
                cout<<result[i];
                cout<<endl<<"This expansion terminates."<<endl<<endl;
                break;
            }
            for( int j = 0 ; j < i ; j++ ){
                if( result[i] == result[j] && left[i] == left[j] ){
                    flag = 1;
                    int count = i - j;
                    cout<<endl<<"The last "<<count<<" digits repeat forever."<<endl<<endl;
                    break;
                }
            }
            if( flag == 1 ){
                break;
            }else{
                if( i % 50 == 49 )
                    cout<<endl;
                cout<<result[i];
            }
        }
    }
    return 0;
}
/*
计算分数的循环小数部分

3 7
345 800
112 990
53 122
0 0

.428571
The last 6 digits repeat forever.

.43125
This expansion terminates.

.113
The last 2 digits repeat forever.

.4344262295081967213114754098360655737704918032786
885245901639
The last 60 digits repeat forever.
 */