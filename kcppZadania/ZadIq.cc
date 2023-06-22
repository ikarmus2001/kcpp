// usage: we can iterate over data more flexibly

#include <iostream>

int main() {
    int* array = new int[4] {5, 6, 7, 8};  
    // Arrays variables are pointers to first element of sequentially initialized items
    
    int i = 2;
    int* q = array;  // so q is pointer to its array's first element
    
    int usualIndexing = q[i];  // We can retrieve item in usual way
    int ex = i[q];  // but also as reversed pointer operation, which is equal to:
    int byHand = *(i + q);  // could also be *(q + i)
    // which mean "jump to address of i and then jump by amount of cells (which q is placed in)"

    // | cell1 | ... | ... | i | ... | q[1] | q[2] | q[3] | ...
    // jump to i ------------^ --- then by q address --^

    std::cout << "Value: " << ex << std::endl;
    std::cout << "Same result for reversed order: " << usualIndexing << std::endl;
    std::cout << "Done by hand: " << byHand << std::endl;
    
    delete[] tab;  // remember to clean up your desk!
    
    return 0;
}
