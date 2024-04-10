#include <iostream>
#include <string>
using namespace std;

// Function to determine the winner
void determineWinner()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << "Bob\n";
        return;
    }
    int countAlice = 0, countBob = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            countAlice++;
        else
            countBob++;
    }
    int x = abs(countAlice - countBob);
    if (n % 2 == 0)
    {
        if (x >= 2)
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }
    else
    {
        if (x >= 2)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        determineWinner();
    return 0;
}
