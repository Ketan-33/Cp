#include <iostream>
#include <vector>
using namespace std;

// Merge function to count inversions
int merge(vector<int> &arr, int left, int mid, int right)
{
    int count = 0;
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            count += (mid - i + 1); // Count inversions
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (int p = 0; p < k; ++p)
    {
        arr[left + p] = temp[p];
    }

    return count;
}

int mergeSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        int count = 0;

        count += mergeSort(arr, left, mid);
        count += mergeSort(arr, mid + 1, right);
        count += merge(arr, left, mid, right);

        return count;
    }
    return 0;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        int totalCount = mergeSort(arr, 0, N - 1);
        cout << totalCount << endl;
    }

    return 0;
}
