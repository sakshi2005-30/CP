#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    vector<ll>nums(n);
    for (auto &it:nums)cin>>it;

    int maxi=1,k=1;
    for (int i=0;i<n-1;i++) {

        if (nums[i]<=nums[i+1])k++;
        else {
            maxi=max(maxi,k);
            k=1;
        }
    }
    cout<<max(maxi,k)<<endl;
    return 0;
}