//A program to show 3D arrays//
/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/

#include <iostream>
#define INPUT_3D_ARRAY(arr, dim1, dim2, dim3) \
    for(int i = 0; i < dim1; i++) { \
        for(int j = 0; j < dim2; j++) { \
            for(int k = 0; k < dim3; k++) { \
                std::cout << "Enter value for element (" << i << ", " << j << ", " << k << "): "; \
                std::cin >> arr[i][j][k]; \
            } \
        } \
    }

int main() {
    int dim1, dim2, dim3;
    std::cout << "Enter the dimensions (dim1, dim2, dim3) for the 3D array: ";
    std::cin >> dim1 >> dim2 >> dim3;
    int arr[dim1][dim2][dim3];
    INPUT_3D_ARRAY(arr, dim1, dim2, dim3);
    return 0;
}

