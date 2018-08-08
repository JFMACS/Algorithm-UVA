#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char name[11][20];
    int money[11];
    int n;
    int flag = 0;
    while( cin>>n && n ){
        if( flag ){
            cout<<endl;
        }
        flag++;
        for( int i = 0 ; i < n ; i++ ){
            cin>>name[i];
            money[i] = 0;
        }
        char give[20];
        char get[20];
        int count,number;
        for( int i = 0 ; i < n ; i++ ){
            cin>>give>>number>>count;
            for( int j = 0 ; j < n ; j++ ){
                if( !strcmp(give,name[j]) ){
                    if( count ){
                        money[j] -= number/count * count;
                    }
                    break;
                }
            }

            for( int j = 0 ; j < count ; j++ ){
                cin>>get;
                for( int k = 0 ; k < n ; k++ ){
                    if( !strcmp(get,name[k]) ){
                        money[k] += number/count;
                        break;
                    }
                }
            }
        }

        for( int i = 0 ; i < n ; i++ ){
            cout<<name[i]<<" "<<money[i]<<endl;
        }
    }
    return 0;
}
/*
计算每人的纯收入与纯支出
5
dave laura owen vick amr
dave 200 3 laura owen vick
owen 500 1 dave
amr 150 2 vick owen
laura 0 2 amr vick
vick 0 0
3
liz steve dave
liz 30 1 steve
steve 55 2 liz dave
dave 0 2 steve liz

dave 302
laura 66
owen -359
vick 141
amr -150

liz -3
steve -24
dave 27
 */