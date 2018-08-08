#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
    int used[10001]; 
    int Z,I,M,L,C = 1;
    while ( scanf("%d%d%d%d",&Z,&I,&M,&L) && M ) {
        Z %= M,I %= M,L %= M;
        memset( used, 1, sizeof(used) );
        int count = 0;
        L = (Z*L+I)%M;
        while ( used[L] ) {
            count ++;
            used[L] = 0;
            L = (Z*L+I)%M;
        }
        printf("Case %d: %d\n",C ++,count);
    }
    return 0;
}
/*
根据给定的公式生成随机数，求生成的随机数的数量

7 5 12 4
5173 3849 3279 1511
9111 5309 6000 1234
1079 2136 9999 1237
0 0 0 0

Case 1: 6
Case 2: 546
Case 3: 500
Case 4: 220
 */
