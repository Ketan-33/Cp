#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> A(n), B(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B.begin(), B.end());
    for (int i = 1; i < n; ++i)
    {
        A[i] += A[i - 1];
        B[i] += B[i - 1];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        --l;
        if (type == 1)
        {
            cout << (l == 0 ? A[r - 1] : A[r - 1] - A[l - 1]) << "\n";
        }
        else
        {
            cout << (l == 0 ? B[r - 1] : B[r - 1] - B[l - 1]) << "\n";
        }
    }
    return 0;
}
