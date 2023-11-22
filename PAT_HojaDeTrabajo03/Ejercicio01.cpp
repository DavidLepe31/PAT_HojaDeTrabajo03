#include "Ejercicio01.h"

int Ejercicio01::findMin(int nums[], int n)
{
    int h = 0;
    int tail = n;
    int min = -1;
    while (h <= tail)
    {
        int mid = h + (tail - h) / 2;
        if (mid==0||nums[mid-1]>nums[mid])
        {
            min = mid;
            tail = mid - 1;

        }
        else {
            h = mid + 1;
        }
    }

    return min;
}
