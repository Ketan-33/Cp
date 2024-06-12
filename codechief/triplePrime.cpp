#include <iostream>
#include <vector>
#include <cmath>
#include <bitset>
#include <set>


using namespace std;

#define int long long

const int LIMIT = 1e5 + 5;

vector<int> primes;
set<int> set_primes;
bitset<LIMIT> isPrime;

void make_prime()
{
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= LIMIT; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i * i);
            set_primes.insert(i * i);
            for (int j = i * i; j <= LIMIT; j += i)
                isPrime[j] = 0;
        }
    }
    for (int i = sqrt(LIMIT) + 3; i <= LIMIT; i++)
        if (isPrime[i])
        {
            primes.push_back(i * i);
            set_primes.insert(i * i);
        }
}

void tripleprime()
{
    int n;
    cin >> n;
    int num = 4;
    for (auto i : primes)
    {
        int triple = n - num - i;
        if (set_primes.count(triple) == 0)
            continue;
        if (num != i && i != triple && num != triple && num + i + triple == n)
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    make_prime();
    while(t--)
    {
        tripleprime();
    }
    return 0;
}
