class Solution {
public:
	int missingNumber(vector<int>& nums) {
		vector<int> list;
		for (int i = 0; i<nums.size() + 1; i++) {
			list.push_back(i);
		}
		list[0] = 1;
		for (int i = 0; i<nums.size(); i++) {
			list[nums[i]] *= -1;
		}
		for (int i = 0; i<list.size(); i++) {
			if (list[i]>0) {
				if (i == 0) {
					return 0;
				} else { 
					return list[i]; 
				}
			}
		}
		if (list[0] == 1) {
			return list.size();
		}
		else {
			return 0;
		}
	}
};
