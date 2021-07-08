#include <iostream>
using namespace std;
#define INT_MAX 5000; // for comparision 

int solve(int arr[], int i, int j)
{
    if (i >= j)  // base condition 
        return 0;
    int min = INT_MAX;
    for (int k = i; k < j; k++)      // i will start from 1 because firs matrix is = arr[i-1]*arr[i];
    {
        int temp = solve(arr, i, k) + solve(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
        if (temp < min)
            min = temp;
    }
    return min;
}

int main()
{
    int arr[] = {5, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Number of operation required will be =" << solve(arr, 1, n - 1);
    return 0;
}
//time complexity is O(n^3) as n time takes to  find the minimum element 
