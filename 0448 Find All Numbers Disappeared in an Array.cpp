class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> numList;
        vector<int> ret;
        int len=nums.size();
        
        for(int i=1;i<=len;i++){
            numList.push_back(i);
        }
        for(int i=0;i<len;i++){
            numList[nums[i]-1]=0;
        }
        for(int i=0;i<len;i++){
            if(numList[i]!=0){
                ret.push_back(i+1);
            }
        }
        return ret;
    }
};
