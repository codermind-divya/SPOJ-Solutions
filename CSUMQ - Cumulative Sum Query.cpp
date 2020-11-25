#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=1;i<n;i++)
    arr[i]+=arr[i-1];
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(a==0)
        cout<<arr[b]<<'\n';
        else
        cout<<arr[b]-arr[a-1]<<'\n';
    }
    return 0;
}
