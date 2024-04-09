#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        if (num == 0){
            cout<<0<<endl;
            break;}
        int guess = num / 3;
        while (true)
        {
            int new_guess = (2 * guess * guess * guess + num) / (3 * guess * guess);
            if (abs(guess - new_guess) < 1)
            {
                cout<<new_guess<<endl;
                break;
            }
            guess = new_guess;
        }
    }
    return 0;
}
