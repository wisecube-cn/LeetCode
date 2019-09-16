class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        vector<string> res;
        for(int i=0;i<words.size();i++){
            string x=words[i];
            string tmp=words[i];
            transform(x.begin(),x.end(),x.begin(),::tolower);
            if(isSubsequence(s1,x)||isSubsequence(s2,x)||isSubsequence(s3,x)){
                res.push_back(tmp);
            }
        }
        //res.push_back("hnjzdsdx");
        return res;
    }
    
    bool isSubsequence(string s, string x) {
        int slen=s.size();
        int xlen=x.size();
        int cnt=0;
        for(int i=0;i<xlen;i++){
            for(int j=0;j<slen;j++){
                if(x[i]==s[j]){
                    cnt++;
                }
            }
        }
        if(cnt==xlen){
            return true;
        }else{
            return false;
        }
    }
};
