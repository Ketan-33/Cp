
#include <iostream>
#include <vector>
using namespace std;

#define int long long
const int LIMIT = 1000002;
vector<int> prime_numbers;
vector<int> spf(LIMIT, 0);

void solve()
{
    int query;
    cin >> query;
    int result = 0;
    if (spf[query] == query)
    {
        for (int prime : prime_numbers)
        {
            if (prime > query)
                break;
            result += (int)prime * query;
        }
    }
    else
    {
        for (int prime : prime_numbers)
        {
            if (prime > spf[query])
                break;
            result += (int)prime * query;
        }
    }
    cout << result << "\n";
}


void prime_factors()
{
    spf[1] = 1;
    for (int i = 2; i < LIMIT; ++i)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            for (int j = (int)i * i; j < LIMIT; j += i)
            {
                if (spf[j] == 0)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    prime_factors();

    for (int i = 2; i < LIMIT; ++i)
    {
        if (spf[i] == i)
        {
            prime_numbers.push_back(i);
        }
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}
