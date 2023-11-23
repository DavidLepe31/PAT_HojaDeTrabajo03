#include "Ejercicio01.h"
#include<algorithm>

int Ejercicio01::findMin(int nums[], int n)
{
    int i = 0;
    int j = n;

    while (i < j) {
        int mid = (i + j) / 2;
        if (nums[mid] < nums[j]) {
            j = mid;
        }
        else {
            i = mid + 1;
        }
    }

    return nums[i];
}
    

