#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
    int N, M, i;
    double C;
    while (scanf("%d%d", &N, &M), N)
    {
        C = 1.0;
        for (i = N; i > N - M; --i)
            C *= (double)i;
        for (i = 2; i <= M; ++i)
            C /= (double)i;
        printf("%d things taken %d at a time is %.0f exactly.\n", N, M, C);
    }
    return 0;
}
/*
级数运算

100 6
20 5
18 6
0 0

100 things taken 6 at a time is 1192052400 exactly.
20 things taken 5 at a time is 15504 exactly.
18 things taken 6 at a time is 18564 exactly.
 */
