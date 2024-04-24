#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> n >> x >> y;

        vector<int> arr(n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin >>arr[i];
            if(arr[i]*x<y)sum+=arr[i]*x;
            else sum+=y;
        }
        cout<<sum<<endl;

    }
}