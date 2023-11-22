#include "Ejercicio01.h"

int Ejercicio01::findMin(int nums[], int n)
{
    int h = 0;
    int tail = n;
    while (h < tail)
    {
        int mid = (h + tail) / 2;
        if (nums[mid] < nums[mid-1])
        {
            h = mid+1;
        }
        if (nums[mid] < nums[mid+1])
        {
            tail = mid;
        }
        else {
            return nums[mid];
        }
    }

    return 0;
}
