#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    double X,Y;
    double X1[11],X2[11],Y1[11],Y2[11];
    int R = 0;
    int P = 0;
    int flag;
    while( getchar() != '*' ){
        getchar();
        cin>>X1[R]>>Y1[R]>>X2[R]>>Y2[R];
        getchar();
        R++;
    }

    while( cin>>X>>Y && X !=9999.9 ){
        flag = 0;
        P++;
        for( int i = 0 ; i < R ; i++ ){
            if( X>X1[i] && X<X2[i] && Y<Y1[i] && Y>Y2[i] ){
                cout<<"Point "<<P<<" is contained in figure "<<i+1<<endl;
                flag++;
            }
        }
        if( !flag ){
            cout<<"Point "<<P<<" is not contained in any figure"<<endl;
        }
    }
    
    return 0;
}

/*
判断矩形与点的位置关系

r 8.5 17.0 25.5 -8.5
r 0.0 10.3 5.5 0.0
r 2.5 12.5 12.5 2.5
*
2.0 2.0
4.7 5.3
6.9 11.2
20.0 20.0
17.6 3.2
-5.2 -7.8
9999.9 9999.9

Point 1 is contained in figure 2
Point 2 is contained in figure 2
Point 2 is contained in figure 3
Point 3 is contained in figure 3
Point 4 is not contained in any figure
Point 5 is contained in figure 1
Point 6 is not contained in any figure
*/
