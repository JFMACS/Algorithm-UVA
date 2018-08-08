#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    int x,y;
    int result[3001];
    int left[3001];
    while( cin>>x>>y ){
        int flag = 0;
        cout<<x<<"/"<<y<<" = "<<x/y<<".";
        x = x%y;
        for( int i = 0 ; i < 3001 ; i++ ){
            x *= 10;
            result[i] = x/y;
            x = x%y;
            left[i] = x;
            for( int j = 0 ; j < i ; j++ ){
                if( result[i] == result[j] && left[i] == left[j] ){
                    flag = 1;
                    int count = i - j;
                    for( int k = 0 ; k < j ; k++ ){
                        cout<<result[k];
                    }
                    cout<<"(";
                    for( int k = 0 ; k < count && k < 50 ; k++ ){
                        cout<<result[j+k];
                    }
                    if( count > 50 ){
                        cout<<"...";
                    }
                    cout<<")"<<endl;
                    cout<<"   "<<count<<" = number of digits in repeating cycle"<<endl<<endl;
                    break;
                }
            }
            if( flag == 1 )
                break;
        }
    }
    return 0;
}
/*
计算循环数字的循环部分

76 25
5 43
1 397

76/25 = 3.04(0)
   1 = number of digits in repeating cycle
5/43 = 0.(116279069767441860465)
   21 = number of digits in repeating cycle
1/397 = 0.(00251889168765743073047858942065491183879093198992...)
   99 = number of digits in repeating cycle
*/