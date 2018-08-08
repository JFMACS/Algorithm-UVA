#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;
 
int main()
{
    char ch[1001];
    while( cin>>ch ){

        if( ch[0] == '*' ){
            break;
        }
        int move = 0;
        int over = strlen(ch) - 1;
        int flag = 1;
        while( ch[move] == ' ' ){
            move ++;
        }

        int flagPoint = 0;
        int flagE = 0;
        for( int i = move ; i <= over ; i++ ){
            if( ch[i] == '.' ){
                flagPoint ++;
            }
            if( ch[i] == 'e' ){
                flagE ++;
            }
            if( ch[i] == 'E' ){
                flagE ++;
            }
        }
        if( flagE > 1 || flagPoint > 1 || flagE+flagPoint == 0 ){
            flag = 0;
        }

        int last = over, start = move;
        if( flag && (flagE == 1) ){
            for( int i = move ; i <= over ; i++ ){
                if( ch[i] == 'e' || ch[i] == 'E' ){
                    if( i == move || i == over ){
                        flag = 0;
                    }
                    over = i-1;
                    start = i+1;
                    break;
                }
            }
            if( ch[start] == '+' || ch[start] == '-' ){
                start++;
            }
            for( int i = start ; i <= last ; i++ ){
                if( ch[i] < '0' || ch[i] > '9' ){
                    flag = 0;
                    break;
                }
            }
        }
        if( flag ){
            int from = 0;
            if( ch[move] == '+' || ch[move] == '-' ){
                from = 1;
            }
            for( int i = move+from ; i <= over ; i++ ){
                if( flagPoint == 1 && ch[i] == '.' && i < over && i > move+from ){
                    continue;
                }
                else if( ch[i] < '0' || ch[i] > '9' ){
                    flag = 0;
                    break;
                }
            }
        }
        for( int i = move ; i <= last ; i++ ){
            cout<<ch[i];
        }
        if( flag ){
            cout<<" is legal."<<endl;
        }
        else{
            cout<<" is illegal."<<endl;
        }
    }
    return 0;
}
/*
判断输入的小数是否符合科学计数法规则

1.2
1.
1.0e-55
 e-12
     6.5E
1e-12
+4.1234567890E-99999
7.6e+12.5
99
*

1.2 is legal.
1. is illegal.
1.0e-55 is legal.
e-12 is illegal.
6.5E is illegal.
1e-12 is legal.
+4.1234567890E-99999 is legal.
7.6e+12.5 is illegal.
99 is illegal.
 */