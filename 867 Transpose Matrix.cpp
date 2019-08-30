class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int w=A[0].size();
        int h=A.size();
        vector<vector<int>> ret(w, vector<int>(h, 0));//w行,h列
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                ret[j][i]=A[i][j];
            }
        }
        return ret;
    }
};
