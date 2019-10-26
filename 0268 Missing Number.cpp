class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int n = len+1;
        int sum_n = (0+n-1)*n/2;
        int sum_nums = 0;
        for(int i=0;i<nums.size();i++){
            sum_nums+=nums[i];
        }
        return sum_n-sum_nums;
    }
};
