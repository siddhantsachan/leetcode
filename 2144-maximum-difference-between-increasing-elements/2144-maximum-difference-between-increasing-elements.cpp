class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=INT_MIN;
        int mn=nums[0];
        for(int i=1;i<nums.size();i++){
            ans=max(ans,nums[i]-mn);
            mn=min(mn,nums[i]);
        }
        if(ans<=0) return -1;
        return ans;
    }
};