//A program to show 2D arrays//
/*  
   AUTHOR  : Monchari Kegege
   REG NO  : BSE-01-0235/2024
   GROUP   : BSE  Group 3  
   ZETECH UNIVERSITY.
*/

#include <iostream>
#define INPUT_2D_ARRAY(arr, rows, cols) \
    for(int i = 0; i < rows; i++) { \
        for(int j = 0; j < cols; j++) { \
            std::cout << "Enter value for element (" << i << ", " << j << "): "; \
            std::cin >> arr[i][j]; \
        } \
    }

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns for the 2D array: ";
    std::cin >> rows >> cols;
    int arr[rows][cols];
    INPUT_2D_ARRAY(arr, rows, cols);
    return 0;
}
