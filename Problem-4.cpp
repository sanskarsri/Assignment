#include <bits/stdc++.h>
using namespace std;

set<int> allfactors(int n) {
    set<int>v; for (int i = 2; i <= sqrt(n); i++) {if (n % i == 0) {
        v.insert(i); if ((n / i) != i)v.insert(n / i);}}
    v.insert(1); v.insert(n); return v;
}

int main()
{
        int n;
        cin>>n;
        int arr[n];
        int ans[10]={};
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
           set<int> s=allfactors(arr[i]);
           for(auto x:s)
           if(x<10)
            ans[x]++;
        }
        for(int i=1;i<10;i++)
        {
            cout<<i<<" : "<<ans[i]<<endl;
        }
        
        return 0;
}