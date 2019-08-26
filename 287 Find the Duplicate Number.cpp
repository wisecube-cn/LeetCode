class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left=0;
        int right=0;
        for(left=0;left<nums.size();left++){
            for(right=left+1;right<nums.size();right++){
                if(nums[left]==nums[right]){
                    return nums[left];
                }
            }
        }
        return -1;
    }
};
