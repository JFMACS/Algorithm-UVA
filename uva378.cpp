#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin>>n;
    double x1,y1,x2,y2,x3,y3,x4,y4;
    double k1,k2,b1,b2,X,Y;
    cout<<"INTERSECTING LINES OUTPUT"<<endl;
    for( int i = 0 ; i < n ; i++ ){
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if( x1!=x2 && x3!=x4 ){
            k1 = (y2-y1)/(x2-x1);
            k2 = (y4-y3)/(x4-x3);
            b1 = y1 - k1*x1;
            b2 = y3 - k2*x3;
            if( k1 == k2 ){
                if( b1 == b2 ){
                    cout<<"LINE"<<endl;
                    continue;
                }else{
                    cout<<"NONE"<<endl;
                    continue;
                }
            }else{
                X = (b2-b1)/(k1-k2);
                Y = k1*X + b1;
                cout<<"POINT ";
                printf("%.2f %.2f\n",X,Y);
                continue;
            }
        }else if( x1==x2 && x3==x4 ){
            if( x1 == x3 ){
                cout<<"LINE"<<endl;
                continue;
            }else{
                cout<<"NONE"<<endl;
                continue;
            }
        }else if( x1==x2 ){
            k2 = (y4-y3)/(x4-x3);
            b2 = y3 - k2*x3;
            X = x1;
            Y = X*k2 + b2;
            cout<<"POINT ";
            printf("%.2f %.2f\n",X,Y);
            continue;
        }else{
            k1 = (y2-y1)/(x2-x1);
            b1 = y1 - k1*x1;
            X = x3;
            Y = X*k1 + b1;
            cout<<"POINT ";
            printf("%.2f %.2f\n",X,Y);
            continue;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
/*
输入两条直线，判断两条线的关系

5
0 0 4 4 0 4 4 0
5 0 7 6 1 0 2 3
5 0 7 6 3 -6 4 -3
2 0 2 27 1 5 18 5
0 3 4 0 1 2 2 5

INTERSECTING LINES OUTPUT
POINT 2.00 2.00
NONE
LINE
POINT 2.00 5.00
POINT 1.07 2.20
END OF OUTPUT
 */