class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        vector<int> indices;
        indices.push_back(INT_MIN+1e4);
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                indices.push_back(i);
            }
        }
        indices.push_back(INT_MAX-1e4);
        int index=1;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(i-indices[index-1]<=k || indices[index]-i<=k){
                ans.push_back(i);
            }
            if(i==indices[index]) index++;
        }
        return ans;
    }
};