#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main()
{
    int array[4][4]={{1,3,3,5},{1,0,3,3},{1,2,3,4},{1,2,1,3}};
    std::cout << sum_diagonal(array);
}

