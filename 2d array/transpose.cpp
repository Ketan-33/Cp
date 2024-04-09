#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin >> m>>n;
    vector<vector<int>> arr(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
