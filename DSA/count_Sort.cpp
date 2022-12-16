#include<iostream>
using namespace std;
// Counting sort on numbers
int main(){
    int n = 8;
    int k = 5;
    int arr[] = {2,1,3,2,5,3,1,2};
    int freq[6] = {0};
    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i = 1;i<=k;i++){
        int n = freq[i];
        while(n--){
            cout<<i;
        }
    }
}


// Counting sort on characters
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n = 8;
//     int k = 5;
//     vector<char> v{'a','d','c','b','v','b'};

//     int freq[26] = {0};
//     for(int i = 0; i<n; i++){
//         freq[v[i]-'a']++;
//     }
//     for(int i = 0;i<26;i++){
//         int n = freq[i];
//         while(n--){
//             char c = 'a' + i;
//             cout<<c;
//         }
//     }
// }

