#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        //int op=0;
        long long int coin=1;
        while(n>3){
            n/=4;
            //op++;
            coin*=2;
        }
        cout << coin << endl;
    }
}