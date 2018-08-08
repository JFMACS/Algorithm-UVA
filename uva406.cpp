#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
    int prime[1000];
    int j = 1;
    prime[0] = 1;
    for( int i = 2 ; i < 1000 ; i++ ){
        int flag = 1;
        for( int k = 2 ; k < i ; k++ ){
            if( i%k == 0 ){
                flag = 0;
                break;
            }
        }
        if( flag ){
            prime[j] = i;
            j++;
        }
    }
    int N,C,count;
    while( cin>>N>>C && N != 0 && C != 0 ){
        count = 0;
        int i = 0;
        while( N >= prime[i] ){
            count++;
            i++;
        }
        cout<<N<<" "<<C<<":";

        if( N == 1 && C != 0 ){
            cout<<" 1"<<endl;
            continue;
        }

        if( count%2 == 0 ){
            if( count <= 2*C ){
                for( int i = 0 ; i < count ; i++ ){
                    cout<<" "<<prime[i];
                }
            }else{
                for( int i = count/2 - C ; i < count/2 + C ; i++ ){
                    cout<<" "<<prime[i];
                }
            }
        }else{
            if( count <= 2*C-1 ){
                for( int i = 0 ; i < count ; i++ ){
                    cout<<" "<<prime[i];
                }
            }else{
                for( int i = count/2 - C + 1; i < count/2 + C ; i++ ){
                    cout<<" "<<prime[i];
                }
            }
        }
        cout<<endl<<endl;
    }
    return 0;
}
/*
按照要求输出素数

21 2
18 2
18 18
100 7

21 2: 5 7 11
18 2: 3 5 7 11
18 18: 1 2 3 5 7 11 13 17
100 7: 13 17 19 23 29 31 37 41 43 47 53 59 61 67
 */
