#include<bits/stdc++.h>
using namespace std;

int main()
/* Logic: 
************ NOTE:Araay should be sorted either increasing or decreasing ***********
we will makea mid element =(start+end)/2 i.e(start pointing to the starting index and end to the ending index ) if arr[mid]> the desired number that means it will be on the right side of the array so we will update start to mid+1 and if arr[mid]< the desired number  that means the desired number is in the left side of the array so we will update end to mid-1 */

{
   int n;cin>>n;
int k,ans=-1;cin>>k;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int start=0,end=n-1,mid=(start+end)/2;
   while(start<=end)
   {
    mid=(start+end)/2;
if(a[mid]<k)
{
start=mid+1;
}
 if(a[mid]>k)
{
end=mid-1;
}
 if(a[mid]==k)
{
    ans=mid;
    break;
}
   }

   cout<<ans<<endl;
 return 0;
}