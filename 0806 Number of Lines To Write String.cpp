class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int sums = 0;
        int count = 0;
        for(int i=0;i<S.length();i++){
            int tmp = widths[S[i]-'a'];
            sums = sums+tmp;
            if(sums>100){
                count++;
                sums = tmp;
            }
        }
        vector<int> ret = {count+1,sums};
        return ret;
    }
};
