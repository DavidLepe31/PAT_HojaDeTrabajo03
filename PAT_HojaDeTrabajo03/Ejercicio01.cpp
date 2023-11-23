#include "Ejercicio01.h"
#include<algorithm>

int Ejercicio01::findMin(int nums[], int n)
{
    int min_ele = nums[0];

    
    for (int i = 0; i < n; i++) {
        if (nums[i] < min_ele) {
            min_ele = nums[i];
        }
    }

    return min_ele;
}
