#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> v;
    for(int i=0;i<n;i++) cin>>arr[i];

    int t;
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==t) v.push_back(i);
    }
    if(v[0]==v[v.size()-1])cout<<v[0];
    else cout<<v[0]<<" "<<v[v.size()-1];

    // int fst=-1,sec;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==t){
    //         if(fst==-1) fst=i;
    //         else sec=i;
    //     }
    // }
    // cout<<fst<<" "<<sec;
    return 0;
   
}