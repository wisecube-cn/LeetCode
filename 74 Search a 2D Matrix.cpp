class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		////判断输入矩阵空不空
		//if (matrix.size() == 0 || matrix[0].size()==0){
		//	return false;
		//}
		//if (target < matrix[0][0] || matrix[matrix.size() - 1][matrix[matrix.size() - 1].size()]-1 < target){
		//	return false;
		//}
		//int slow = 0;
		//int fast = matrix.size() - 1;
		//int mid = (slow + fast) / 2;
		////找到行
		//while (fast-slow>1){
		//	mid = (slow + fast) / 2;
		//	if (matrix[slow][0] == target || matrix[fast][0] == target){
		//		return true;
		//	} else if (target < matrix[mid][0]){
		//		fast = mid;
		//	} else if (matrix[mid][0] < target){
		//		slow = mid;
		//	} else if (matrix[mid][0] == target){
		//		return true;
		//	}
		//}
		////找到该行中的列
		////防止漏最后一行
		//int row = 0;
		//if (matrix[slow][matrix[slow].size() - 1] < target){
		//	row = fast;
		//	slow = 0;
		//	fast = matrix[row].size() - 1;
		//} else {
		//	row = slow;
		//	slow = 0;
		//	fast = matrix[row].size() - 1;
		//}

		//while (fast-slow>1){
		//	mid = (slow + fast) / 2;
		//	if (matrix[row][slow] == target || matrix[row][fast] == target){
		//		return true;
		//	} if (target < matrix[row][mid]){
		//		fast = mid;
		//	} else if (matrix[row][mid] < target){
		//		slow = mid;
		//	} else if (matrix[row][mid] == target){
		//		return true;
		//	}
		//}

		//if (matrix[row][mid] == target){
		//	return true;
		//} else {
		//	return false;
		//}

		//int m = matrix.size();
		//if (m == 0) return false;
		//int n = matrix[0].size();

		//// 二分查找
		//int left = 0, right = m * n - 1;
		//int pivotIdx, pivotElement;
		//while (left <= right) {
		//	pivotIdx = (left + right) / 2;
		//	pivotElement = matrix[pivotIdx / n][pivotIdx % n];
		//	if (target == pivotElement) return true;
		//	else {
		//		if (target < pivotElement) right = pivotIdx - 1;
		//		else left = pivotIdx + 1;
		//	}
		//}
		//return false;

		int m = matrix.size();
		if (m == 0){
			return false;
		}
        int n = matrix[0].size();
		int left = 0;
		int right = m*n - 1;
		while (left <= right){
			int mid = (left + right) / 2;
			int element = matrix[mid / n][mid%n];
			if (target == element){
				return true;
			} else if (target < element){
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}
		return false;
	}
};
