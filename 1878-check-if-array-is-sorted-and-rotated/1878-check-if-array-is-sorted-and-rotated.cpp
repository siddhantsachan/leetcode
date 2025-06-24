class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        int i;
        for(i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                break;
            }
        }
        if(i==n) return true;
        if(i!=n && nums[0]<nums[n-1]) return false;
        for(;i<n-1;i++){
            if(nums[i]>nums[i+1]) break;
        }
        if(i==n-1) return true;
        return false;
    }
};