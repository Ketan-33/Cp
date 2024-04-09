#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    vector<vector<int>> brr(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        // int sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            // sum += arr[i][j];
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        // int sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> brr[i][j];
            // sum += arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum=arr[i][j]+brr[i][j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }

    return 0;
}
