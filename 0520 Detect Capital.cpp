class Solution {
public:
    bool detectCapitalUse(string word) {
        string big = word;
        transform(big.begin(), big.end(), big.begin(), ::toupper);
        
        string little = word;
        transform(little.begin(), little.end(), little.begin(), ::tolower);
        
        string first = little;
        first[0]=first[0]-32;
        
        if(word==big||word==little||word==first){
            return true;
        }else{
            return false;
        }
    }
};
