#include <iostream>

#define int long long

int calculateCount(int N, int K, int H)
{
    int count = 0;
    int a = 1, b = 1;

    while (a <= N)
    {
        if (a < H)
        {
            if ((a * K - b * (K - 1)) >= H)
            {
                while ((a * K - b * (K - 1)) >= H)
                {
                    b++;
                }
                count += b - 1;
                a++;
            }
            else
            {
                a++;
            }
        }
        else
        {
            count += N;
            a++;
        }
    }

    return count;
}

signed main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int N, K, H;
        std::cin >> N >> K >> H;

        int count = calculateCount(N, K, H);

        std::cout << count << std::endl;
    }

    return 0;
}
