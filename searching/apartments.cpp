
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    for (int &size : applicants)
        cin >> size;

    vector<int> apartments(m);
    for (int &size : apartments)
        cin >> size;

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
    int count = 0;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (abs(applicants[i] - apartments[j]) <= k)
        {
            count++;
            i++;
            j++;
        }
        else if (apartments[j] < applicants[i] - k)
            j++;

        else
            i++;
    }

    cout << count << endl;

    return 0;
}
