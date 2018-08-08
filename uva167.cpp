#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>

using namespace std;

int n = 8;
int C[8];
int count = 0;
int SOLN[100][8];

void search( int cur ){
    if( cur == n ){
        for( int i = 0 ; i < n ; i++ ){
            SOLN[count][i] = C[i]+1;
        }
        count += 1;
    }else{
        for( int i = 0 ; i < n ; i++ ){
            int flag = 1;
            C[cur] = i;
            for( int j = 0 ; j < cur ; j++ ){
                if( C[cur] == C[j] || cur - C[cur] == j - C[j] || cur + C[cur] == j + C[j] ){
                    flag = 0;
                    break;
                }
            }
            if( flag ){
                search(cur+1);
            }
        }
    }
}
int main()
{
    int dot,x,y;
    search(0);
    int sum,board,max;
    int num[8][8];

    cin>>board;
    for( int m = 0 ; m < board ; m++ ){
        for( int i = 0 ; i < 8 ; i++ ){
            for( int j = 0 ; j < 8 ; j++ ){
                cin>>num[i][j];
            }
        }
        max = 0;
        for( int i = 0 ; i < count ; i++ ){
            sum = 0;
            for( int j = 0 ; j < n ; j++ ){
                sum += num[j][SOLN[i][j]-1];
            }
            if( sum > max ){
                max = sum;
            }
        }
        printf("%5d",max);
        cout<<endl;
    }
    return 0;
}
/*
八皇后问题，输入每个格子的值，计算八皇后的最大值

1
 1  2  3  4  5  6  7  8
 9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64

   260
 */