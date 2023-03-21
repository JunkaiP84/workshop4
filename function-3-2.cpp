#include <stdio.h>
#include <iostream>
int medianinarray(int array[], int n){
    if(n<1||n%2==0)
    
    return 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(array[j]>array[j+1]){
                int t=array[j+1];
                array[j+1]=array[j];
                array[j]=t;
            }
        }
    }
    int median=array[n/2];
    
    return median;
}
