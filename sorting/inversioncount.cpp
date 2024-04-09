#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    long long inv_count = 0;

    i = left;
    j = mid;  
    k = left; 

    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            inv_count += (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

long long mergeSort(int arr[], int temp[], int left, int right)
{
    long long inv_count = 0;
    if (right > left)
    {
        int mid = (right + left) / 2;
        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int temp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << mergeSort(arr, temp, 0, n - 1) << endl;
    }

    return 0;
}