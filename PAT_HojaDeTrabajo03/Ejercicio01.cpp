#include "Ejercicio01.h"
#include<algorithm>

int Ejercicio01::findMin(int nums[], int n)
{
    int min = nums[0];

    
    for (int i = 0; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    return min;
}
