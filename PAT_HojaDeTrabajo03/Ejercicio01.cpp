#include "Ejercicio01.h"

int Ejercicio01::findMin(int nums[], int n)
{
    int h = 0;
    int tail = n;
    while (h < tail)
    {
        int mid = h+( tail-h) / 2;
        if (nums[mid] > nums[mid-1] && nums[mid+1]>nums[mid-1])
        {
            tail = mid;
        }
        if (nums[mid] > nums[mid+1] )
        {
            h = mid + 1;

        }
        else {
            return mid;
        }
    }

    return 0;
}
