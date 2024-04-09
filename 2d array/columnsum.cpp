#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        // int sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            // sum += arr[i][j];
        }
        // cout << sum << endl;

    }
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = 0; j < m; j++)
        {
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }

    return 0;
}
