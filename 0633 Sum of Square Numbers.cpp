class Solution {
public:
    bool judgeSquareSum(int c) {
        double i = 0;
        int jj = sqrt(c);
        double j = jj;
        while(i<=j){
            double sum = i*i+j*j;
            if(sum>c){
                j = j-1;
            }else if(sum<c){
                i = i+1;
            }else{
                return true;
            }
        }
        return false;
    }
};
