#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b+c<=d)
        cout<<1<<endl;
        else 
        if(a+b<=d||b+c<=d||a+c<=d)
        cout<<2<<endl;
        else
        cout<<3<<endl;
    }
}