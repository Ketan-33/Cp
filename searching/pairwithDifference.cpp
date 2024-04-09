#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        unordered_set<int> elements;
        bool found = false;

        for (int i = 0; i < N; i++)
        {
            int num;
            cin >> num;

            if (elements.count(num - K) || elements.count(num + K))
            {
                found = true;
            }
            elements.insert(num);
        }

        cout << (found ? "true" : "false") << endl;
    }
    return 0;
}