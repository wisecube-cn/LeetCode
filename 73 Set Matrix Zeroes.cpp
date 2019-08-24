#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		vector<int> pos;//行、列的顺序排成一维数组
		int row = 0;
		int w = matrix[0].size();
		int h = matrix.size();
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (matrix[i][j] == 0){
					pos.push_back(i);
					pos.push_back(j);
				}
			}
		}

		//行列设置0
		for (int i = 1; i < pos.size(); i = i + 2){
			setRowZeros(matrix, pos[i-1]);
			setColZeros(matrix, pos[i]);
		}
	}
	void setRowZeros(vector<vector<int>>& matrix, int row){
		int w = matrix[0].size();
		int h = matrix.size();
		for (int col = 0; col < w; col++){
			matrix[row][col] = 0;
		}
	}
	void setColZeros(vector<vector<int>>& matrix, int col){
		int w = matrix[0].size();
		int h = matrix.size();
		for (int row = 0; row < h; row++){
			matrix[row][col] = 0;
		}
	}
};

int main(){
	Solution s;

	vector<vector<int>> matrix ={
		{ 0, 1, 2, 0 },
		{ 3, 4, 5, 2 },
		{ 1, 3, 1, 5 }
	};

	s.setZeroes(matrix);

	for (int i = 0; i < matrix.size(); i++){
		for (int j = 0; j < matrix[0].size(); j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
