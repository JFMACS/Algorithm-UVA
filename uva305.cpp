#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>

using namespace std;

bool judge(int num, int k) {
    int gg = 0;
    for( int i = num * 2 ; i > num ; i-- ){
        gg = (gg - 1 + k) % i;
        if ( gg < num ){
            return false;
        }
    }
    return true;
}

int solve( int k ){
    for( int i = k + 1 ; ; i++ ){
        if( judge(k, i) ){ 
           return i;
        }
    }
    return -1;
}

int main() {
    int k, m[15];
    for( int i = 1 ; i < 14 ; i++ ){
        m[i] = solve(i);
    }
    while( cin>>k && k != 0 ){
        cout<<m[k]<<endl;
    }
    return 0;
}
/*
约瑟夫环问题，输入k，总人数2*k，要求先淘汰后k个人

3
4
0

5
30
 */
