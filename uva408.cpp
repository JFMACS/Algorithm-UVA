#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
#include <string.h>

using namespace std;

int getDiv( int a , int b ){
    return a%b?getDiv(b,a%b):b;
}

int main()
{
    int a,b;
    while( cin>>a>>b ){
        int c = getDiv( a , b );
        printf("%10d%10d",a,b);
        if( c == 1 ){
            cout<<"    Good Choice"<<endl;
        }else{
            cout<<"    Bad Choice"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
/*
根据给定的公式计算随机数，计算是否能够将给定范围内的数取尽

3 5
15 20
63923 99999

         3         5     Good Choice
        15        20     Bad Choice
     63923     99999     Good Choice
 */
