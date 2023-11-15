CodeChef Problem
Problem-Equal Elements
--------------------------solution-------------------------
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        map<int,int >m;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            m[x]++;
        }
        set<int>s;
        for(auto it:m)
        {
            int d=it.second;
            s.insert(d);
        }
        auto z=s.rbegin();
        cout<<n-*z<<endl;
    }
    return 0;
}
