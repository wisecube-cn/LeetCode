class Solution {
public:
    string toLowerCase(string str) {
        string ret;
        for(int i=0;i<str.length();i++){
            char c = str[i];
            if(c>=65 && c<90){
                c+=32;
            }
            ret = ret+c;
        }
        return ret;
    }
};
