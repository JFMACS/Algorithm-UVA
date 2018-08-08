#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int A[100];
    int B[100];
    int a;
    while( cin>>a && a != EOF ){
        A[0] = a;
        int b,size_A=1,size_B=0;
        char ch;
        while( cin>>a ){
            A[size_A++] = a;
            ch = getchar();
            if( ch == '\n' ){
                break;
            }
        }
        while( cin>>b ){
            B[size_B++] = b;
            ch = getchar();
            if( ch == '\n' ){
                break;
            }
        }
        int count = 0;
        int i;
        for( i = 0 ; i < size_A ; i++ ){
            for( int j = 0 ; j < size_B ; j++ ){
                if( A[i] == B[j] ){
                    count++;
                    break;
                }
            }
        }
        if( count == 0 ){
            cout<<"A and B are disjoint"<<endl;
        }
        else if( size_A == size_B && size_A == count ){
            cout<<"A equals B"<<endl;
        }else if( size_A == count ){
            cout<<"A is a proper subset of B"<<endl;
        }else if( size_B == count ){
            cout<<"B is a proper subset of A"<<endl;
        }else{
            cout<<"I'm confused!"<<endl;
        }
    }
    return 0;
}
/*
计算两个集合的关系

55 27
55 27
9 24 1995
9 24
1 2 3
1 2 3 4
1 2 3
4 5 6
1 2
2 3

A equals B
B is a proper subset of A
A is a proper subset of B
A and B are disjoint
I'm confused!
 */