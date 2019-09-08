// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        int r=n;
        int mid=l+(r-l)/2;
        int g=0;
        while(l<r){
            mid=mid=l+(r-l)/2;
            g=guess(mid);
            if(g==0){
                return mid;
            }else if(g==-1){
                r=mid;
            }else if(g==1){
                l=mid+1;
            }
        }
        return l;
    }
};
