#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n;
    cin >> m>>n;
    vector<vector<int>> arr(m, vector<int>(n));
    int max=0;
    for (int i = 0; i < m; i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            sum+=arr[i][j];
        }
        if(max>sum) max=sum;
    }
    cout <<max<< endl;

    return 0;
}
