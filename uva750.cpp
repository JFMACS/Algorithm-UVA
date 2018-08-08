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
    int dot,x,y,line;
    search(0);
    cin>>dot;
    for( int i = 0 ; i < dot ; i++ ){
        cin>>x>>y;
        cout<<"SOLN       COLUMN"<<endl;
        cout<<" #      1 2 3 4 5 6 7 8"<<endl<<endl;
        line = 1;
        for( int j = 0 ; j < count ; j++ ){
            if( SOLN[j][y-1] == x ){
                printf("%2d      ",line);
                line++;
                for( int k = 0 ; k < n ; k++ ){
                    cout<<SOLN[j][k];
                    if( k != n-1 ){
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
        }
        if( i != dot-1 ){
            cout<<endl;
        }
    }
    return 0;
}
/*
八皇后问题，输入一个皇后的位置，输出八个皇后的位置

1

1 1
SOLN       COLUMN
 #      1 2 3 4 5 6 7 8

 1      1 5 8 6 3 7 2 4
 2      1 6 8 3 7 4 2 5
 3      1 7 4 6 8 2 5 3
 4      1 7 5 8 2 4 6 3
 */