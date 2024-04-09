#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m;
    cin >> m;
    vector<vector<int>> arr(m, vector<int>(m));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0, k = i; j < m && k >= 0; ++j, --k)
        {
            cout << arr[k][j] << " ";
        }
        cout << endl;
    }

    for (int i = 1; i < m; ++i)
    {
        for (int j = i, k = m - 1; j < m && k >= 0; ++j, --k)
        {
            cout << arr[k][j] << " ";
        }
        cout << endl;
    }
}
