#include<iostream>
#include<string>
using namespace std;

int geoSeries(string s)
{
    int count = 0;
    for (int i = 0; i < 4; i++)
        if (s[i] == '1')
            count++;

    if (count == 0)
        return 0;
    else if (count == 1)
        return 11;
    else if ((count == 2 && s[0] == '1' && s[1] == '1') || (count == 2 && s[2] == '1' && s[3] == '1'))
        return 21;
    else if (count == 3)
        return 231;
    else if (count == 4)
        return 441;
    else
        return 121;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << geoSeries(s) << endl;
    }
}
