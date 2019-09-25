class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int ret = 0;
        for(int i=0;i<A[0].size();i++){
            for(int j=0;j<A.size()-1;j++){
                if(A[j][i]>A[j+1][i]){
                    ret++;
                    break;
                }
            }
        }
        return ret;
    }
};

