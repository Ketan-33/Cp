#include<iostream>
#include<vector>
using namespace std;
#define int long long

signed main(){
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(q--){
        int x;
        cin>>x;
        int big=0,small=0;
        int zero=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x) zero++;
            if(arr[i]>x) big++;
            
        }
        if(zero>0){
            cout<<"0"<<endl;
            }

        else if(big%2==0)cout<<"POSITIVE"<<endl;
        else cout<<"NEGATIVE"<<endl;


    }
    return 0;
}