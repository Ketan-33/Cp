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
        int max=0;
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] > max)
            {
                max=arr[i][j];
            }
        }
        cout <<max<< endl;
    }
}
