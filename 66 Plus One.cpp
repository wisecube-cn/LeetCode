#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int len = digits.size();
		int i = 0;
		int carry = 0;
		for (i = len-1; i >= 0; i--){
			//末尾才加一
			if (i == len - 1){
				digits[i] = digits[i] + 1;
			}
			//非末尾就加进位，同时清除进位标志
			digits[i] = digits[i] + carry;
			carry = 0;
			//继续判断当前是否产生进位，则进行操作
			if (digits[i] >= 10){
				digits[i] -= 10;
				carry = 1;
			}
		}
		//如果最后还有进位
		if (carry == 1){
			digits.insert(digits.begin(), 1);
		}
		return digits;
	}
	void pt(vector<int>& input){
		for (int i = 0; i < input.size(); i++){
			printf("%d ", input[i]);
		}
		printf("\n");
	}
};

int main(){
	Solution s;

	vector<int> input = { 9, 9, 9 };

	s.pt(input);

	s.pt(s.plusOne(input));

	return 0;
}
