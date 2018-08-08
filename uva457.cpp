#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n;
    int DNA[10];
    int dishes[42],buf[42];
    cin>>n;
    for( int i = 0 ; i < n ; i++ ){

        for( int j = 0 ; j < 10 ; j++ ){
            cin>>DNA[j];
        }
        for( int j = 0 ; j < 42 ; j++ ){
            dishes[j] = 0;
            buf[j] = 0;
        }

        dishes[20] = 1;
        for( int days = 0 ; days < 50 ; days++ ){

            for( int j = 1 ; j < 41 ; j++ ){
                buf[j] = dishes[j];
                switch( dishes[j] ){
                    case 0 : cout<<" ";break;
                    case 1 : cout<<".";break;
                    case 2 : cout<<"x";break;
                    case 3 : cout<<"W";break;
                }
            }
            cout<<endl;

            for( int j = 1 ; j < 41 ; j++ ){
                dishes[j] = DNA[ buf[j-1] + buf[j] + buf[j+1] ];
            }
        }
        if( i != n-1 ){
            cout<<endl;
        }
    }
    return 0;
}
/*
输入DNA，i细菌第n天的密度由前一天的自己与旁边细菌的密度决定
公式为：DNA[ dishes[i-1]+dishes[i]+dishes[i+1] ]

1

0 1 2 0 1 3 3 2 3 0

                   .                    
                  ...                   
                 .x x.                  
                .  .  .                 
               .........                
              .x       x.               
             .  x     x  .              
            ...xxx   xxx...             
           .x .WW.x x.WW. x.            
          .   .xxW . Wxx.   .           
 */
