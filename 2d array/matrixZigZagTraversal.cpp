#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    vector<vector<int>> brr(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        int temp = n - 1;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if(i%2!=0){
            brr[i][temp] = arr[i][j];
            temp--;}
            else brr[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<brr[i][j]<<" ";
        }
    }

    return 0;
}
