#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int>nums(m);
    for ( auto &it:nums) {
        cin>>it;
    }

    sort(nums.begin(),nums.end());

    cout<<endl;
    int mini=INT_MAX;
    int x=n-1;
    for (int i=0;i<m-x;i++) {
        int diff=nums[i+x]-nums[i];
        mini=min(mini,diff);
    }
   cout<<mini<<endl;
    return 0;
}