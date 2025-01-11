#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n;
        cin >> m;
        cin >> k;
        int a[m];
        int q[k];
        for(int i=0;i<m;i++){
            cin >> a[i];
        }
        for(int i=0;i<k;i++){
            cin >> q[i];
        }
        if(n-k>1){
            for(int i=0;i<m;i++){
                cout<<0;
            }
            cout<<endl;
        }
        else if(n==k){
            for(int i=0;i<m;i++){
                cout<<1;
            }
            cout<<endl;
        }
        else {
            int no=n;
            for(int i=0;i<k;i++){
                if(q[i]!=i+1){
                    no=i+1;
                    break;
                }
            }
            for(int i=0;i<m;i++){
                if(a[i]==no ){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
            
            cout<<endl;
        }
    }    
}