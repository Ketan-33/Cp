#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int c;
    cin>>c;
    vector<int>arr(c);
    for(int i=0;i<c;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<c;i++){
        cout<<arr[i]<<" ";
    }
}