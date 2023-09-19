class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

          sort(nums.begin(), nums.end());
         
        for(int i=1; i<nums.size(); i++)
            if(nums[i-1]==nums[i])
                return {nums[i-1], nums[i-1]+1};

                return {};
        
    }
};
        
 
