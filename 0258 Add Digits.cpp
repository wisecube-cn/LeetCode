class Solution {
public:
    int addDigits(int num) {
        int tmp = sum(num);
        while(tmp>=10){
            tmp = sum(tmp);
        }
        return tmp;
    }
    int sum(int num){
        int ret = 0;
        while(num){
            ret = ret+num%10;
            num=num/10;
        }
        return ret;
    }
};
