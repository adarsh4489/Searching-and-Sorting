#include<bits/stdc++.h>
using namespace std;
int main()
// Logic: search for the smallest element and swap it with the first element this we will do till the whole array is sorted.

{
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int i,j;
for( i=0;i<n-1;i++)
{
        int temp=i;
    for( j=i+1;j<n;j++)
    {
        if(a[j]<a[temp])
        temp=j;
    }
    swap(a[i],a[temp]);
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}

    return 0;
}