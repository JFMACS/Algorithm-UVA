#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int judge(char ch){
    if( ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' ){
        return 1;
    }else if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' ) ){
        return -1;
    }
    return 0;
}

int main(){
    char ch;
    int flag = 0;
    char buf;
    int type;
    while( scanf("%c",&ch) && ch ){
        type = judge(ch);
        if( type == 1 ){
            cout<<ch;
            if( flag == 0 ){
                flag = 1;
                buf = ch;
            }
        }else if( type == -1 ){
            if( flag == 0 ){
                buf = ch;
                flag = 1;
            }else{
                cout<<ch;
            }
        }else{
            if( flag == 1 ){
                if( judge(buf) == -1 ){
                    cout<<buf<<"ay";
                }else{
                    cout<<"ay";
                }
            }
            cout<<ch;
            flag = 0;
        }

    }
    return 0;
}
/*
将输入的字符串按照规则倒置输出

This is the input.

hisTay isay hetay inputay.
 */