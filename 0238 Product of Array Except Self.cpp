class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        int sum=1;
        for(int i=0;i<len;i++){
            sum*=nums[i];
        }
        //如果sum是0，那么nums里面有0
        if(sum==0){
            //计算非零sum
            int sum_no=1;
            vector<int> pos;
            vector<int> ret;
            for(int i=0;i<len;i++){
                if(nums[i]!=0){
                    sum_no*=nums[i];
                }else{
                    pos.push_back(i);
                }
            }
            for(int i=0;i<len;i++){
                ret.push_back(0);
            }
            if(pos.size()==1){
                ret[pos[0]]=sum_no;
                return ret;
            }else{
                return ret;
            }
        }else{//如果sum没有0，说明nums里面没有0，可以直接相除
            vector<int> ret;
            for(int i=0;i<len;i++){
                ret.push_back(sum/nums[i]);
            }
            return ret;
        }
        vector<int> ret;
        return ret;
    }
};
