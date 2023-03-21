#include <stdio.h>
#include <iostream>
bool is_fanarray(int array[], int n){
    if(n<1)
    
    return 0;
    bool ascending=1;
    bool fanarray=1;
    for(int i=1 ;i<=n/2;i++){
        if(array[i]<array[i-1])ascending=0;
        
    }
    if(ascending){
        for(int i=0;i<=n/2;i++){
            if(array[i]!=array[n-1-i]){
                fanarray=0;

                break;
            }
        }
    }

    return fanarray; 
}
