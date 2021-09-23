#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void binarySearch(vector<int>&v,int low,int high,int search,int count)
{
    high--;
    while(low<=high)
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
}
void expoSearch(vector<int>&v,int size,int search)
{
    int count=0;
    if(v[0]==search)
    {
        cout<<"Found ";
        return;
    }
    int i=1;
    while(v[i]<=search && i<size)
    {
        count+=1;
        i*=2;
    }
    binarySearch(v,i/2,min(i,size),search,count);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    vector<int>v;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int search;
    cin>>search;
    expoSearch(v,size,search);
    }
    return 0;
}