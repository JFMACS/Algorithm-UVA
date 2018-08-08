#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int MAX = 30010;

int cent[5] = {1,5,10,25,50};
long long f[MAX];

void init(){
    f[0] = 1;
    for( int i = 0 ; i < 5 ; i++ ){
        for( int j = cent[i] ; j < MAX ; j++ ){
            f[j] += f[ j-cent[i] ];
        }
    }
}

int main(){
    init();
    int n;
    while( cin>>n ){
        if( f[n] == 1 ){
            cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        }
        else{
            cout<<"There are "<<f[n]<<" ways to produce "<<n<<" cents change."<<endl;
        }
    }
    return 0;
}
/*
求换零钱的方法数

17
11
4

There are 6 ways to produce 17 cents change.
There are 4 ways to produce 11 cents change.
There is only 1 way to produce 4 cents change.
 */