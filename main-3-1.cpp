#include <iostream>
extern bool is_fanarray(int array[], int n);
int main(int argc, const char * argv[]) {
    int array[4]={1,2,2,1};
    std::cout << is_fanarray(array,4) << std::endl;
    
    return 0;
}

