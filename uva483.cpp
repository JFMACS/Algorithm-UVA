#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    char ch[20];
    char c;
    while( cin>>ch ){
        c = getchar();
        for( int i = strlen(ch)-1 ; i >= 0 ; i-- ){
            cout<<ch[i];
        }
        cout<<c;
    }
    return 0;
}
/*
将输入的单词倒置

I love you.
You love me.
We're a happy family.

I evol .uoy
uoY evol .em
er'eW a yppah .ylimaf       
 */
