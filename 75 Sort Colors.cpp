#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
	void sortColors(vector<int>& nums) {
		////sort(nums.begin(), nums.end());

		////扫描两次，第一次记录0,1,2的个数，第二次重写数组。
		//int num0 = 0;
		//int num1 = 0;
		//int num2 = 0;
		//int len = nums.size();
		//for (int i = 0; i < len; i++){
		//	if (nums[i] == 0){
		//		num0++;
		//	} else if (nums[i] == 1){
		//		num1++;
		//	} else if (nums[i] == 2){
		//		num2++;
		//	}
		//}
		//for (int i = 0; i < len; i++){
		//	if (i < num0){
		//		nums[i] = 0;
		//	} else if (i < num0+num1){
		//		nums[i] = 1;
		//	} else if (i < num0+num1+num2){
		//		nums[i] = 2;
		//	}
		//}

		//三路快排
		//zeroEnd是放0那部分的尾部索引，twoBegin是放2那部分的首部索引
		//碰到0放到zeroEnd+1处，碰到2放到twoEnd-1处，碰到1指针后移
		//https://www.cnblogs.com/higerzhang/p/4100200.html
		int start = 0, end = nums.size() - 1;
		int i = 0;
		while (i <= end){
			if (nums[i]==0 && i!=start){
				swap(nums, start++, i);
			}
			else if (nums[i] == 2 && i != end){
				swap(nums, i, end--);
			}
			else ++i;
		}

	}
	void swap(vector<int>& A, int i, int j){
		int temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
};

int main(){
	Solution s;

	vector<int> nums = { 2, 0, 2, 1, 1, 0 };

	s.sortColors(nums);

	for (int i = 0; i < nums.size(); i++){
		printf("%d ", nums[i]);
	}
	printf("\n");

	return 0;
}
