#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int number[1000];
    int a[1000],b[1000],compare[1000],guess[1000];
    int n,game = 0;
    while( cin>>n && n != 0 ){

        for( int i = 0 ; i < n ; i++ ){
            cin>>number[i];
        }
        int count = 0;
        while( 1 ){

            a[count] = 0;
            b[count] = 0;

            for( int i = 0 ; i < n ; i++ ){
                compare[i] = number[i];
            }

            for( int i = 0 ; i < n ; i++ ){
                cin>>guess[i];
            }

            if( guess[0] == 0 ){
                break;
            }

            for( int i = 0 ; i < n ; i++ ){
                if( compare[i] == guess[i] ){
                    a[count]++;
                    compare[i] = guess[i] = 0;
                }
            }

            for( int i = 0 ; i < n ; i++ ){
                for( int j = 0 ; j < n ; j++ ){
                    if( guess[i] != 0 && guess[i] == compare[j] ){
                        b[count]++;
                        compare[j] = 0;
                        break;
                    }
                }
            }

            count++;
        }

        game++;
        cout<<"Game "<<game<<":"<<endl;
        for( int i = 0 ; i < count ; i++ ){
            cout<<"    ("<<a[i]<<","<<b[i]<<")"<<endl;
        }
    }
    return 0;
}
/*
第一行为正确数字，第二到最后一行为猜测数字，输出猜对的数字和猜对数字但位置错误的个数

4
1 3 5 5
1 1 2 3
4 3 3 5
6 5 5 1
6 1 3 5
1 3 5 5
0 0 0 0
10
1 2 2 2 4 5 6 6 6 9
1 2 3 4 5 6 7 8 9 1
1 1 2 2 3 3 4 4 5 5
1 2 1 3 1 5 1 6 1 9
1 2 2 5 5 5 6 6 6 7
0 0 0 0 0 0 0 0 0 0
0

Game 1:
(1,1)
(2,0)
(1,2)
(1,2)
(4,0)
Game 2:
(2,4)
(3,2)
(5,0)
(7,0)
 */
