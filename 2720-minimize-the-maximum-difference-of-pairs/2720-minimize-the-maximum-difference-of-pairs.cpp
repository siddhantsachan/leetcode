class Solution {
public:
    bool check(int mid,vector<int> & nums,int p){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]<=mid){
                i++;
                p--;
            }
        }
        return p<=0;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int hi=1e9, lo=0, mid;
        while(hi-lo>1){
            mid=(hi+lo)/2;
            if(check(mid,nums,p)) hi=mid;
            else lo=mid+1;
        }
        if(check(lo,nums,p)) hi=lo;
        return hi;
    }
};