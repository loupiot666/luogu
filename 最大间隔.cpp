#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={10,7,15,9};
    sort(arr,arr+sizeof(arr)/sizeof(arr[0]));
    int maxtime;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0])-1;i++)
    {
        maxtime=max(maxtime,arr[i+1]-arr[i]);
        
    }
    cout<<maxtime<<endl;
    return 0;

}