// #include <bits/stdc++.h>
// using namespace std;

// // int solve(int *arr[0]){
// //     int cnt = 0;
// //     for(int i = 0; i<5; i++){
// //         if((arr+i)%2 == 0){
// //             cnt++;
// //         }
// //     }
// //     return cnt;
// // }

// // int main(){
// //     // int arr[5] = {2,3,1,4,5};
// //     // cout<<solve(arr[0]);
// //     int a = 5;
// //     int *b = &a;
// //     int **c = &b;
// //     // &a++;
// //     cout<<&a<<" "<<a<< " "<<*(b)<<endl;
// //     // *(&a) ++;
// //     // *&a++;
// //     cout<<&a<<" "<<a<< " "<<&b;
    
// // }

// // int solve(int n){
// //     if(n == 0){
// //         return 0;
// //     }
// //     return n%10 +solve(n/10);;
// // }

// int solve(int a[],int n){
//     int cnt = 0;
//     for(int i = 0; i<n; i++){
//         if(a[i]%2==0){
//             cnt++;
//             // cout<<a[i];
//         }
//         // cout<<*a<<" ";
//         // &a += 1;
//     }
//     cout<<endl;
//     return cnt;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     cout<<solve(arr,5);
// }



// //sum of 2d array using pointer

// // 


// map<int,int> mp;
// void solve(vector<int> &v,int n,int k){
//     int i = 0;
//     while(i<n){
//         mp[v[i]]++;
//         i++;
//     }
    
// }
// int final(int k){
//     int cnt = 0;
//     int prev;
//     for(auto it : mp){
//         for(int i = 0; i<it.second;i++){
//             cnt++;
//             if(cnt == k) return it.first;
//         }
//     }
//     return 0;
// }
// int main(){
//     vector<int> v = {5,5,3,4,1,6}; // 1 3 4 5 5 6
//     int k ;
//     // cin>>k;
//     k = 5;
//     if(k>v.size()){
//         cout<<"not found";
//     }
//     solve(v,6,k);
//     cout<<final(k);
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "cev";
    vector<int>v;
    cout<<s;
    return 0;
}
