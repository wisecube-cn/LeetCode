class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> raw;
        for(int i=0;i<heights.size();i++){
            raw.push_back(heights[i]);
        }
        sort(heights.begin(),heights.end());
        int cnt=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=raw[i]){
                cnt++;
            }
        }
        return cnt;
    }
};
