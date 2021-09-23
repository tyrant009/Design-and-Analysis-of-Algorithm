#include <iostream>
using namespace std;

int main(){
    int n,i,t;
    cin>>t; 
    while(t--){
        cin>>n; 
        char arr[n]; 
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[arr[i]-'a']++;
        }
        int max=0,ctr;
        for(int i=0;i<26;i++){
            if(freq[i]>max){
                max=freq[i];
                ctr=i;
            }
        }
        if(max>1)
            cout<<char('a'+ctr)<<" : "<<max<<endl;
        else
            cout<<"No Duplicates Present"<<endl;
    }
    return 0;
}