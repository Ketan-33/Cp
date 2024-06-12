#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        if (Y <= X)
        {
            cout << 0 << endl;
            continue;
        }
        
        int td = X * 10;
        int rd = 10 * Y;
        int m = rd - td;
        int ans = (m + (100 - Y) - 1) / (100 - Y); // Ceiling of the division

        cout << ans << endl;
    }
    return 0;
}
