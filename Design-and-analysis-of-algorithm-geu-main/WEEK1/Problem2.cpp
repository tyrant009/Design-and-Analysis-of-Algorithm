#include<iostream>
#include<vector>
using namespace std;

void binarySearch(vector<int>&v,int size,int search)
{
    int low=0,high=size-1,count=0;
    while(low <= high)
    {
        count+=1;
        int mid=low+(high-low)/2;
        if(v[mid]==search)
        {
            cout<<"Present "<<count<<endl;
            return;
        }
        else
        {
            if(v[mid]>search)
                high=mid-1;
            else
                low=mid+1;
        }
    }
    cout<<"Not Present "<<count<<endl;
    return;
}
int main()
{
    int size,t;
    cin>>t;
    while(t--){
    vector<int>v;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int search;
    cin>>search;
    binarySearch(v,size,search);
    }
    return 0;
}