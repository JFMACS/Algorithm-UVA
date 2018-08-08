#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    char ch[1000];
    char c;
    int count = 0;
    while( cin.getline(ch,1000) ){
        for( int i = 0 ; i < strlen(ch) ; i++ ){
            if( ('a' <= ch[i] && ch[i] <= 'z') || ('A' <= ch[i] && ch[i] <= 'Z') ){
                count++;
                while( ('a' <= ch[i] && ch[i] <= 'z') || ('A' <= ch[i] && ch[i] <= 'Z') ){
                    i++;
                }
            }
        }
        cout<<count<<endl;
        count = 0;
    }
    return 0;
}
/*
计算输入的字符串中的单词数

Meep Meep!
I tot I taw a putty tat.
I did! I did! I did taw a putty tat.
Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...

7
10
9
 */
