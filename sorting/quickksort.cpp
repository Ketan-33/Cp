#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int i=low,j=high,pivot=arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<=high-1)i++;
        while(arr[j]>pivot && j>=low+1)j--;
        if(i<j)swap(arr[i],arr[j]);
        
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[], int low, int high){
    if(low<high){
        int pivot=partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
