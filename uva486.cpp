#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string.h>

using namespace std;

char words[28][10] = { "zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" , "ten" ,
                       "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" , "sixteen" , "seventeen" , "eighteen" , "nineteen" ,
                       "twenty" , "thirty" , "forty" , "fifty" , "sixty" , "seventy" , "eighty" , "ninety" };

int main(){
    char ch[200];
    while( cin.getline(ch,200) && ch ){
        int number = 0;
        int negative = 0;
        int millions = 0,thousands = 0;
        char word[10];
        int j = 0;
        for( int i = 0 ; i < strlen(ch)+1 ; i++ ){
            if( ch[i] == ' ' || i == strlen(ch) ){
                word[j] = '\0';
                //cout<<word<<"  ";
                if( !strcmp(word,"hundred") ){
                    number *= 100;
                }else if( !strcmp(word,"million") ){
                    millions = number;
                    number = 0;
                }else if( !strcmp(word,"thousand") ){
                    thousands = number;
                    number = 0;
                }else if( !strcmp(word,"negative") ){
                    negative = 1;
                }else{
                    for( int k = 0 ; k < 28 ; k++ ){
                        if( !strcmp(word,words[k]) ){
                            if( k < 21 ){
                                number += k;
                            }else{
                                switch(k){
                                    case 21 : number += 30;break;
                                    case 22 : number += 40;break;
                                    case 23 : number += 50;break;
                                    case 24 : number += 60;break;
                                    case 25 : number += 70;break;
                                    case 26 : number += 80;break;
                                    case 27 : number += 90;break;
                                }
                            }
                            break;
                        }
                    }
                }
                j = 0;
                //cout<<number<<endl;
            }else{
                word[j] = ch[i];
                j++;
            }
        }
        if( negative ){
            cout<<"-";
        }
        if( millions != 0 ){
            cout<<millions<<setfill('0')<<setw(3)<<thousands<<setfill('0')<<setw(3)<<number<<endl;
        }else if( thousands != 0 ){
            cout<<thousands<<setfill('0')<<setw(3)<<number<<endl;
        }else{
            cout<<number<<endl;
        }
    }
    return 0;
}
/*
将英语翻译成数字

six
negative seven hundred twenty nine
one million one hundred one

6
-729
1000101
 */