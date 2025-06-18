class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=3){
            vector<int> v;
            for(int j=i;j<i+3;j++){
                v.push_back(nums[j]);
            }
            if(v[2]-v[0]>k){
                return {};
            }
            ans.push_back(v);
        }
        return ans;
    }
};