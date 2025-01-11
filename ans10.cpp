#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// long long int mid(long long int l, long long int r,long long int k,long long int m){
//     long long int len=r-l+1;

//     if(len<k){
//         return m;
//     }
//     long long int mel=(l+r)/2;
//     if(len%2==0){
//         return (mid(l,mel,k,m)+ mid(mel+1,r,k,m) - m);
//         // mid(mel + 1,r,k,m);
//     }
//     else{
//         return (mid(l,mel-1,k,m+mel)+  mid(mel+1,r,k,m+mel) - m);
//         // mid(mel+1,r,k,m+mel);
//     }
// }

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,k;
        cin >> a >> k;
        long long int copy=a;
        long long int n=0;
        while(copy>=k){
            copy = copy/2;
            n++;
        }
        cout << n*(n+1)*(copy+1) << endl;
    }
    return 0;
}