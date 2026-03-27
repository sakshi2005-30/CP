#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    vector<ll>nums(n);
    for (auto &it:nums)cin>>it;
    for (ll i=n-1;i>=0;i--) {
        for (int j=i-1;j>=0;j--) {
            if (nums[j]>nums[i]) {
                int diff=nums[j]-nums[i];
                nums[i]+=diff;
                nums[j]-=diff;
            }
        }
    }
    for (auto it:nums)cout<<it<<" ";
    return 0;
}