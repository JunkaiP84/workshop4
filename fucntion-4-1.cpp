#include <stdio.h> 
int sumofarray(int array[], int n){
    int sum=0;
    if(n<1)
    
    return 0;
    
    for(int i=0;i<n;i++){
        sum=sum+array[i];
    }

    return sum;
}
