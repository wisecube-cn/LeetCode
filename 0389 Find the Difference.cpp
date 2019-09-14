class Solution {
public:
    char findTheDifference(string s, string t) {
        int len=s.size();
        int i=len;
        int sum1=0;
        int sum2=0;
        while(i--){
            sum1+=s[i];
            sum2+=t[i];
        }
        sum2+=t[len];
        return (char)(sum2-sum1);
    }
};
