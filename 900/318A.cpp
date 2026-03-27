#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n,k;
    cin>>n>>k;
    if (n%2==0) {
        ll div=n/2;
        if (k<=div) {
            //it is odd
            cout<<(2*k-1)<<endl;
        }
        else {
            ll x=k-div;
            cout<<x*2<<endl;
        }
    }
    else {
        ll div=n/2+1;

        if (k<=div) {
            //it is odd
            cout<<(2*k-1)<<endl;
        }
        else {
            //k is even
            ll x=k-div;
            cout<<x*2<<endl;
        }

    }


    return 0;
}