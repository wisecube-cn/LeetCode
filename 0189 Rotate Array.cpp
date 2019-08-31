class Solution {
public:
    void rotate(vector<int>& nums, int k) {
		k = k%nums.size();
		int len = nums.size();

		vector<int> end;
		end.assign(nums.begin() + (len - k), nums.end());
		

		vector<int> start;
		start.assign(nums.begin(), nums.begin() + (len - k));
        
        //把end和start拼接成新的
        
		nums.clear();
		nums.insert(nums.begin(), end.begin(), end.end());
		nums.insert(nums.begin() + k, start.begin(), start.end());
        
        //vector<int> temp;
		//temp.insert(temp.begin(), end.begin(), end.end());
		//temp.insert(temp.begin() + k, start.begin(), start.end());
		//for (int i = 0; i < nums.size(); i++) {
		//	nums[i] = temp[i];
		//}
        
        
    }
};
