#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        vector<int>::iterator biggest = std::max_element(std::begin(A), std::end(A));
		return std::distance(std::begin(A), biggest);
    }
};
