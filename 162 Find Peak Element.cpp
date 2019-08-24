#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
	int findPeakElement(vector<int>& nums) {
		if (nums.size() == 1){
			return 0;
		}
		if (nums.size() == 2){
			if (nums[0]<nums[1]){
				return 1;
			}
			else{
				return 0;
			}
		}
		int l = -1;
		int mid = 0;
		int r = 1;
		while (r<nums.size()){
			//mid为第0位元素时的判断
			if (l == -1){
				if (nums[nums.size() - 1]<nums[mid] && nums[mid]>nums[r]){
					return 0;
				}
			}
			else if (nums[l]<nums[mid] && nums[mid]>nums[r]){
				return mid;
			}
			mid++;
			l++;
			r++;
			//让mid可以移动到末尾
			//mid移动到最后一个元素时，进行如下判断
			if (r == nums.size()){
				if (nums[l]<nums[mid] && nums[mid]>nums[0]){
					return mid;
				}
			}
		}
		return 0;
	}
};

int main(){
	Solution s;



	return 0;
}
