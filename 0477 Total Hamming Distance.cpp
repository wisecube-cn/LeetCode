class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int count = 0;
        for(int i = 0;i<32;i++){
            int sumOne = 0;
            for(int j = 0;j < nums.size();j++){
                sumOne += nums[j] & 1;
                nums[j] >>= 1;
            }
            count += sumOne*(nums.size() - sumOne);
        }
        return count;
    }
};
