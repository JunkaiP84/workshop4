#include <stdio.h>
#include <iostream>

void print_binary_str(std::string decimal_number){
    
    int num;
    num=stoi(decimal_number);
    int t[40];
    int i=0;
    while(num!=0){
        t[i]=num%2;
        num=num/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        std::cout << t[j];
    }
}
