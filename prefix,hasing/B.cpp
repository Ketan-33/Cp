#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int minOps(char from, char to)
{
    int ops = abs(from - to);
    return min(ops, 26 - ops);
}

int togenome(string s, int n)
{
    int minOpsTotal = INT_MAX;
    for (int i = 0; i <= n - 4; ++i)
    {
        int currentOps = 0;
        currentOps += minOps(s[i], 'A');
        currentOps += minOps(s[i + 1], 'C');
        currentOps += minOps(s[i + 2], 'T');
        currentOps += minOps(s[i + 3], 'G');
        minOpsTotal = min(minOpsTotal, currentOps);
    }
    return minOpsTotal;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << togenome(s, n) << endl;
    return 0;
}