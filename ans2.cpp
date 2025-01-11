#include<iostream>
#include<string>
using namespace std;

//function that takes a string containing small english alphabets and 
//return array containing the frequency of each alphabet
int* frequency(string s,int start,int end){
    int* freq = new int[26];
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }
    for(int i=start; i <=end;i++){
        freq[s[i]-'a']++;
    }
    return freq;
}

//count non zero element in an array
int countNonZero(int* arr,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s; 
        int* freq = frequency(s,0,n-1);
        //find the alphabet with maximum frequency
        int max = 0;
        int maxIndex = 0;
        for(int i=0;i<26;i++){
            if(freq[i]>max){
                max = freq[i];
                maxIndex = i;
            }
        }
        int count = 0;
        char let =maxIndex+'a';
        int i=0;
        while(count<=max/2){
            if(s[i]==let){
                count++;
            }
            i++;
        }
        cout <<let<<" " <<count <<" "<< countNonZero(frequency(s,0,count),26) << countNonZero(frequency(s,count+1,n-1),count) << endl;
    }
}