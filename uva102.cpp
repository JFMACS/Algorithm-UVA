#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    char type[6][4] = {"BCG","BGC","CBG","CGB","GBC","GCB"};
    int B[3],G[3],C[3];
    int flag,min,move[6],SUM;
    while( scanf("%d",&B[0]) != EOF ){
        cin>>G[0]>>C[0];
        SUM = B[0] + C[0] + G[0];
        for( int i = 1 ; i < 3 ; i++ ){
            cin>>B[i]>>G[i]>>C[i];
            SUM += B[i] + G[i] + C[i];
        }
        move[0] = SUM - B[0] - C[1] - G[2];
        move[1] = SUM - B[0] - C[2] - G[1];
        move[2] = SUM - B[1] - C[0] - G[2];
        move[3] = SUM - B[2] - C[0] - G[1];
        move[4] = SUM - B[1] - C[2] - G[0];
        move[5] = SUM - B[2] - C[1] - G[0];
        min = move[0];
        flag = 0;
        for( int i = 0 ; i < 6 ; i++ ){
            if( min > move[i] ){
                min = move[i];
                flag = i;
            }
        }
        cout<<type[flag]<<" "<<min<<endl;
    }
    return 0;
}
/*
三个容器中有三种颜色的瓶子，移动瓶子使得每个容器中只有一种颜色，求最少的移动次数

1 2 3 4 5 6 7 8 9
5 10 5 20 10 5 10 20 10

BCG 30
CBG 50
 */