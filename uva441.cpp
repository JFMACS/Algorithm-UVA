#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int k;
    int number[13];
    int count = 0;
    while( cin>>k && k != 0 ){
        count++;
        for( int i = 0 ; i < k ; i++ ){
            cin>>number[i];
        }
        if( count != 1 ){
            cout<<endl;
        }
        for( int a = 0 ; a < k-5 ; a++ ){
            for( int b = a+1 ; b < k-4 ; b++ ){
                for( int c = b+1 ; c < k-3 ; c++ ){
                    for( int d = c+1 ; d < k-2 ; d++ ){
                        for( int e = d+1 ; e < k-1 ; e++ ){
                            for( int f = e+1 ; f < k ; f++ ){
                                cout<<number[a]<<" "<<number[b]<<" "<<number[c]<<" "<<number[d]<<" "<<number[e]<<" "<<number[f]<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
/*
输入数字串，将其按从大到下顺序输出6个数的排列组合

7 1 2 3 4 5 6 7
8 1 2 3 5 8 13 21 34
0

1 2 3 4 5 6
1 2 3 4 5 7
1 2 3 4 6 7
1 2 3 5 6 7
1 2 4 5 6 7
1 3 4 5 6 7
2 3 4 5 6 7
1 2 3 5 8 13
1 2 3 5 8 21
1 2 3 5 8 34
1 2 3 5 13 21
1 2 3 5 13 34
1 2 3 5 21 34
1 2 3 8 13 21
1 2 3 8 13 34
1 2 3 8 21 34
1 2 3 13 21 34
1 2 5 8 13 21
1 2 5 8 13 34
1 2 5 8 21 34
1 2 5 13 21 34
1 2 8 13 21 34
1 3 5 8 13 21
1 3 5 8 13 34
1 3 5 8 21 34
1 3 5 13 21 34
1 3 8 13 21 34
1 5 8 13 21 34
2 3 5 8 13 21
2 3 5 8 13 34
2 3 5 8 21 34
2 3 5 13 21 34
2 3 8 13 21 34
2 5 8 13 21 34
3 5 8 13 21 34
 */
