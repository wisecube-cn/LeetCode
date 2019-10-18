class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> ret;
		for (int i = left; i<right+1; i++) {
			if (isNum(i) == true) {
				ret.push_back(i);
			}
		}
		return ret;
	}
	bool isNum(int num) {
		vector<int> slf;
		int num2 = num;
		while (num!=0) {
			int tmp = 0;
			tmp = num % 10;
			if (tmp != 0) {
				slf.push_back(num % 10);
			}else{
                return false;
            }
			num = num / 10;
		}
		int flag = 0;
		for (int i = 0; i<slf.size(); i++) {
			int n = num2%slf[i];
			if (n!=0) {
				flag = 1;
			}
		}
		if (flag == 0) {
			return true;
		} else {
			return false;
		}
	}
};
