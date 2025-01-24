#include<iostream>
#include<algorithm>

using namespace std;
template <class T>
T abc(T a, T b, T c){
    return a+b+c;
}

int main(){
    int a=3;
    int b=4;
    int c=5;
    cout<<abc(a,b,c)<<endl;

    return 0;
}