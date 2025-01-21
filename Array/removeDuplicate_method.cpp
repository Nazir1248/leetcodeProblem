#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 2, 5, 5, 5, 5};

//     // Sort the vector to group duplicates
//     sort(arr.begin(), arr.end());

//     // Remove duplicates
//     auto it = unique(arr.begin(), arr.end());

//     // Erase the extra elements
//     arr.erase(it, arr.end());

//     // Print the resulting vector
//     for (int val : arr) {
//         cout << val << " ";
//     }

//     return 0;
// }

int main(){
    vector<int> arr =  {1, 2, 2, 5, 5, 5, 5};
    sort(arr.begin(),arr.end());
    auto it = unique(arr.begin(),arr.end());
    arr.erase(it,arr.end());

    return 0;
}

