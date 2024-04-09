#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cin>>m;
    vector<vector<int>> arr(m,vector<int>(m));
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            if(i==j || i==(m-1-j)){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    
}

