#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool check(vector<int>& arr, int a ,int b){

    for(int i=a;i<b;i+=2){
        if(2*arr[i]<=arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        //take length and vector as an input
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        //sort the vector
        sort(arr.begin(),arr.end());

        if(n%2==0){
            if(check(arr,0,n-1)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            if(check(arr,0,n-2) || check(arr,1,n-1)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}