#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[10001];
    arr[1]=1;
    arr[2]=3;
    for(int i=3;i<n+1;i++){
        arr[i]=(arr[i-1]+arr[i-2]*2)%10007;
    }
    cout<<arr[n];
}