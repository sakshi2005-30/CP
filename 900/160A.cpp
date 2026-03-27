#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    vector<ll>nums(n);
    for (int i=0;i<n;i++)cin>>nums[i];
    sort(nums.begin(),nums.end(),greater<int>());

    vector<ll>prefix(n,0),suffix(n,0);
    prefix[0]=nums[0];
    for (int i=1;i<n;i++) {
        prefix[i]=prefix[i-1]+nums[i];
    }
    suffix[n-1]=nums[n-1];
    for (int i=n-2;i>=0;i--) {
        suffix[i]=suffix[i+1]+nums[i];
    }

    int cnt=0;
    for (int i=0;i<n;i++) {
        if (prefix[i]>suffix[i]-nums[i]) {
            cnt=i;
            break;
        }
    }
    cout<<cnt+1<<endl;
    return 0;

}