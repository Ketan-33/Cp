#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if((a-b)>=10)cout<<0<<endl;

        else cout<<abs(abs(a-b)-10)<<endl;
    }
}