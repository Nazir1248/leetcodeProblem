#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr { 1,2,2,1};
    int j=0;
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]!=arr[i]){
            arr[j]=arr[i-1];
            j++;
        }
    }
    arr[j]=arr[arr.size()-1];
    j++;
    for(int i=0;i<j;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}