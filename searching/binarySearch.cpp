#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int t;
    cin>>t;
    int low=0,high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==t) {
            cout<<mid;
            break;
            }
        else if(arr[mid]>t) high=mid-1;
        else low=mid+1;
        mid=(low+high)/2;
    }
    return 0;
}
