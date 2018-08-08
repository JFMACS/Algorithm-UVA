#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n,a,f;
    cin>>n;
    for( int i = 0 ; i < n ; i++ ){
        getchar();
        cin>>a>>f;
        for( int j = 0 ; j < f ; j++ ){

            for( int k = 1 ; k <= a ; k++ ){
                for( int n = 0 ; n < k ; n++ ){
                    cout<<k;
                }
                cout<<endl;
            }

            for( int k = a-1 ; k > 0 ; k-- ){
                for( int n = 0 ; n < k ; n++ ){
                    cout<<k;
                }
                cout<<endl;
            }


            if( j < f-1 ){
                cout<<endl;
            }

        }

        if( i < n-1 ){
            cout<<endl;
        }
    }
    return 0;
}
/*
根据输入的振幅与频率输出波形

1

3
2

1
22
333
22
1

1
22
333
22
1
 */
