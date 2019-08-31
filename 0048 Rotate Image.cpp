class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int w=matrix[0].size();
        int h=matrix.size();
        vector<vector<int>> rev(w, vector<int>(h, 0));//w行,h列
        //旋转
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                rev[j][i]=matrix[i][j];
            }
        }
        //左右翻转
        w=rev[0].size();
        h=rev.size();
        int l=0;
        int r=w-1;
        while(l<r){
            //换列
            for(int i=0;i<h;i++){
                int temp=rev[i][l];
                rev[i][l]=rev[i][r];
                rev[i][r]=temp;
            }
            l++;
            r--;
        }
        matrix=rev;
    }
};
