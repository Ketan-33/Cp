#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==m)cout<<0<<endl;
        else if(n>m)cout<<n-m<<endl;
        else {
            int add = n- m%n; 
            int rm = m%n;  
            cout << min(add, rm) << endl;
        }
    }
}