class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0 || prices.size()==1){
            return 0;
        }
        int sum=0;
        int temp;
        for(int i=0;i<prices.size()-1;i++){
            if((temp=prices[i+1]-prices[i])>0){
                sum+=temp;
            }
        }
        return sum;
    }
};
