#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    vector<vector<int>> brr(m, vector<int>(n));
int p,q;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==0){
                p=i;
                q=j;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (brr[i][j] == 0)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}
