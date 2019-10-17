class Solution {
public:
	bool uniqueOccurrences(vector<int>& arr) {
		vector<int> unq = arr;
		sort(unq.begin(), unq.end());
		unq.erase(unique(unq.begin(), unq.end()), unq.end());
		int size = unq.size();
		vector<int> cnt;
		for (int i = 0; i<size; i++) {
			int n = 0;
			for (int j = 0; j<arr.size(); j++) {
				if (arr[j] == unq[i]) {
					n = n + 1;
				}
			}
			cnt.push_back(n);
		}
		sort(cnt.begin(), cnt.end());
		cnt.erase(unique(cnt.begin(), cnt.end()), cnt.end());
		if (cnt.size() == unq.size()) {
			return 1;
		}
		else {
			return 0;
		}

	}
};
