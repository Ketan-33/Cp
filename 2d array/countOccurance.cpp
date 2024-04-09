#include <iostream>
#include<vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    vector<vector<int> >freq(n,vector<int>(10001));
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            freq[i][arr[i][j]]++;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int ans=0;
        for (int i=0;i<n;i++)
        {
            if (freq[i][x] > 0) ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
