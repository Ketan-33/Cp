#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if activating from a given start index in a specified direction can activate all balls in that direction
bool canActivateInDirection(const vector<int> &X, const vector<int> &P, int start, int direction)
{
    int N = X.size();
    int farthest = X[start] + (direction == 1 ? P[start] : -P[start]);
    for (int i = start + direction; (direction == 1 ? i < N : i >= 0); i += direction)
    {
        if ((direction == 1 ? X[i] <= farthest : X[i] >= farthest))
        {
            farthest = max(farthest, X[i] + (direction == 1 ? P[i] : -P[i]));
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> X(N);
        vector<int> P(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> X[i];
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> P[i];
        }

        bool possible = false;

        // Check if one activation from any point can activate all balls
        for (int i = 0; i < N; ++i)
        {
            if (canActivateInDirection(X, P, i, 1) || canActivateInDirection(X, P, i, -1))
            {
                possible = true;
                break;
            }
        }

        // Check if two activations can cover the entire array
        if (!possible)
        {
            for (int i = 0; i < N - 1; ++i)
            {
                if (canActivateInDirection(X, P, 0, 1) && canActivateInDirection(X, P, N - 1, -1))
                {
                    possible = true;
                    break;
                }
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
