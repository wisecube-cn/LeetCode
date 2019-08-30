class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> odd;
        vector<int> eve;
        sort(A.begin(),A.end());
        int len=A.size();
        for(int i=0;i<len;i++){
            if(A[i]%2==0){
                eve.push_back(A[i]);
            }else{
                odd.push_back(A[i]);
            }
        }
        len=odd.size();
        for(int i=0;i<len;i++){
            eve.push_back(odd[i]);
        }
        return eve;
        
    }
};
