//A program to show 1D arrays//
/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/

#include <iostream>
#define INPUT_1D_ARRAY(arr, size) \
    for(int i = 0; i < size; i++) { \
        std::cout << "Enter value for element " << i << ": "; \
        std::cin >> arr[i]; \
    }

int main() {
    int size;
    std::cout << "Enter the size of the 1D array: ";
    std::cin >> size;
    int arr[size];
    INPUT_1D_ARRAY(arr, size);
    return 0;
}
