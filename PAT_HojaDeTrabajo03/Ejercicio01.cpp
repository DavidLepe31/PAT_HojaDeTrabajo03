#include "Ejercicio01.h"
#include<algorithm>


int Ejercicio01::findMin(int nums[], int n)
{
    int h = 0;
    int tail = n;
    int mid;
    while (h < tail) {
        mid = h + (tail - h) / 2;
        if (nums[mid] < nums[tail]) {
            tail = mid;
        }
        else if (nums[mid] > nums[tail]) {
            h = mid + 1;
        }
        else tail--;
    }
    return nums[h];

    
}
