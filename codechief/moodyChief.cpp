#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N, l, r;
        cin >> N >> l >> r;
    int high=0;
    int low=0;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int maxHappiness = 0;
        int minHappiness = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] >= l && A[i] <= r)
            {
                maxHappiness++;
                if(maxHappiness>high)high=maxHappiness;
            }
            else
            {
                maxHappiness--;
                if(maxHappiness<low)low=maxHappiness;
            }
        }

        cout << high<< " " << low<< "\n";
    }

    return 0;
}
