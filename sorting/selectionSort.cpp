#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int j = i - 1, x = arr[i];
            while (j >= 0 && x < arr[j])
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = x;
            if (j + 1 == 0)
                count++;
            if (count == 1 && j + 1 == 0)
                continue;
            else
                cout << j + 1 << " ";
        }
        cout << endl;
    }
}