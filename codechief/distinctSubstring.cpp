#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;

        int sum;
        sum= (k*(k+1))/2;
        if(sum+k-1 <=n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }
    return 0;
}
