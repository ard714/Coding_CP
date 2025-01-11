#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;   
    while(t--){
        int n,m;
        cin >> n >> m;
        string s1,s2;
        cin >> s1 >> s2;
        int i=0;
        int done=0;
        while(i<=static_cast<int>(log2(ceil(m/n)))+2){
            if(s1.find(s2)!=-1){
                done=1;
                break;
            }
            s1 += s1;
            i++;
        }
        if(done==0){
            cout << -1 << endl;
        }
        else{
            cout << i << endl;
        }
    }
}
