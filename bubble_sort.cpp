#include<bits/stdc++.h>
using namespace std;
int main()
// Logic: compare adjacent element and if find smaller or grater according to you convinience swap it wewill do this till our array is sorted. 
// Note: after each time you complete the loop your last element will automatically gets sorted so you dont have to iterate whole loop again and again`
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {
if(a[i]>a[i+1])
swap(a[i],a[i+1]);
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 return 0;
}