#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int EvenSumSubarray(const vector<int> &arr)
{
    int N = arr.size();
    int sum = 0;
    
    for (int i = 0; i < N; ++i) sum += arr[i];
    
    if (sum % 2 == 0) return N;
    
    int left = -1, right = -1;
    for (int i = 0; i < N; ++i)
    {
        if (arr[i] % 2 != 0)
        {
            left = i;
            break;
        }
    }
    for (int i = N - 1; i >= 0; --i)
    {
        if (arr[i] % 2 != 0)
        {
            right = i;
            break;
        }
    }
    return max(N - left - 1, right);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<EvenSumSubarray(arr)<<endl;
    }
}