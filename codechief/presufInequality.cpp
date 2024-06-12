#include <iostream>
#include <vector>
#include <cmath>
#include <bitset>

using namespace std;

// Function to generate a list of prime numbers up to a certain limit
vector<int> generatePrimes(int limit)
{
    vector<int> primes;
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= limit; ++i)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = 2 * i; j <= limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

// Function to generate the required array for a given N
vector<int> generateArray(int N)
{
    vector<int> primes = generatePrimes(100000);
    vector<int> A(N);

    for (int i = 0; i < N; ++i)
    {
        A[i] = primes[i];
    }

    return A;
}

int main()
{
    ios_base::sync_with_stdio(false); // Fast input-output
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        vector<int> result = generateArray(N);

        for (int i = 0; i < N; ++i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
