#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        vector<int> b(a), c(a), d(a), e(a);
        int sb=0,sc=0,sd=0,se=0;
        for (int i = 0; i < a; ++i){
            cin >> b[i];
            sb+=b[i];}

        for (int i = 0; i < a; ++i){
            cin >> c[i];
            sc+=c[i];}

        for (int i = 0; i < a; ++i){
            cin >> d[i];
            sd+=d[i];}

        for (int i = 0; i < a; ++i){
            cin >> e[i];
            se+=e[i];}

        string result = "";
        if (sb > sd && sc > se)
            result += 'A';
        else if (sd > sb && se > sc)
            result += 'P';
        else
            result += "DRAW";

        cout << result << endl;
    }

    return 0;
}