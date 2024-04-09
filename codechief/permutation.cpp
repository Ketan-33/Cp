#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t; 

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> P(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> P[i];
        }
        
        int op = 0;
        for (int i = 0; i < n; ++i)
        {
            
            if (P[i] == i + 1)
            {
                swap(P[i],P[i+1]);
                op++;
            }
        }

        cout << op << endl;
    }

    return 0;
}
