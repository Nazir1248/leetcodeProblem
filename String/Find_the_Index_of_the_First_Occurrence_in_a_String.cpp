#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Solution {
 public:
  int strStr(string haystack, string needle) {
    const int m = haystack.length();
    const int n = needle.length();
    for (int i = 0; i < m - n + 1; i++)
      if (haystack.substr(i, n) == needle)
        return i;

    return -1;
  }
};

int main(){
    string s1 ;
    cout<<"Enter the string s1:: ";
    getline(cin,s1);
    cout<<"Enter the string s2:: ";
    string s2;
    getline(cin,s2);

    Solution s;
    int n=s.strStr(s1,s2);
    cout<<n<<endl;
    return 0;
}


