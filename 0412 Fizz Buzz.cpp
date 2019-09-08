class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        if(n==1){
            stringstream ss;
            ss<<n;
            string s=ss.str();
            ret.push_back(s);
            return ret;
        }
        for(int i=1;i<n+1;i++){
            if(i%3==0 && i%5==0){
                ret.push_back("FizzBuzz");
            }else if(i%3==0){
                ret.push_back("Fizz");
            }else if(i%5==0){
                ret.push_back("Buzz");
            }else{
                stringstream ss;
                ss<<i;
                string s=ss.str();
                ret.push_back(s);
            }
        }
        return ret;
    }
};
