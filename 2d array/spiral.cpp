#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int m, temp;
        cin >> m;
        vector<vector<int>> arr(m, vector<int>(m));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int tt = 0, ll = 0;
        int bb = m - 1, rr = m - 1;

        while (tt <= bb && ll <= rr)
        {

            for (int i = ll; i <= rr; i++)
            {
                cout << arr[tt][i] << " ";
            }
            tt++;

            for (int i = tt; i <= bb; i++)
            {
                cout << arr[i][rr] << " ";
            }
            rr--;

            if (tt <= bb)
            {
                for (int i = rr; i >= ll; i--)
                {
                    cout << arr[bb][i] << " ";
                }
                bb--;
            }

            if (ll <= rr)
            {
                for (int i = bb; i >= tt; i--)
                {
                    cout << arr[i][ll] << " ";
                }
                ll++;
            }
        }
        cout << endl;
    }
}