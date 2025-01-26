#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int res=0;
    while(n>0){
        res=res*10+n%10;
        n=n/10;
    }
    cout<<res<<endl;

    return 0;
}