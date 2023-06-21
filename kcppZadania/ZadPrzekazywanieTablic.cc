// It is possible to pass array without loss of its size
#include <iostream>


void print(int array[], int arrayLen) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << std::endl;
        // its equal to *(arr + i), so we are jumping in memory cell by cell as usual
    }
}

int main() 
{
    int array[] = {8, 9, 10};
    int size = sizeof(array)/sizeof(array[0]);
    print(array, size);
    
    return 0;
}