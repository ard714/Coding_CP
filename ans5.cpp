#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int con=1;
        int a=0;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[0]){
                a=i;
                break;
            } 
        }
        for(int i=a+1;i<n;i++){
            if(arr[i]!=arr[a]){
                con=0;
                break;
            } 
        }
        if(con && (a==0 || a==n/2 || a==(n+1)/2)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }    
}