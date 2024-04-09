#include <bits/stdc++.h>
#include<vector>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    vector<int> N(n);
    for(int i=0; i<n; i++){
        cin>>N[i];
    }
    int q;
    cin>>q;
    while(q--){
        int i,j;
        cin>>i>>j;
        int sum=0;
        for(int k=i; k<=j; k++){
            sum+=N[k];
        }
        cout<<sum<<endl;
    }
}