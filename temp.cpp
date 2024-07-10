#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n;cin>>n;
    // int i, j, k = n;
 
   
    // for (i = 1; i <= n; i++) {
 
    //     // Inner loop for columns
    //     for (j = 1; j <= n; j++) {
 
    //         // Condition to print star pattern
    //         if (j >= k)
    //             cout << "* ";
    //         else
    //             cout << " ";
    //     }
    //     k--;
    //     cout << "\n";
    // }
    int n;cin>>n;
    int a=1,b=2,c;
    
   while(n) {
        c=a+b;
        cout<<c<<" ";
        a=b;b=c;
        n--;
    }
    
 return 0;
}