#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    int count=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==0)count++;
        }
    }
    if(count>((m*n)/2))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

    return 0;
}
