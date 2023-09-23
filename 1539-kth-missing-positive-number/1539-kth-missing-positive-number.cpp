class Solution {
private:
    bool search(int tar, const vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (tar == arr[i]) {
                return true;
            }
        }
        return false;
    }

public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v;
        int cnt = 0;
        for (int i = 1; ; i++) {
            if (!search(i, arr)) {
                v.push_back(i);
                cnt++;
                if (cnt == k) {
                    break;
                }
            }
        }
        return v[k - 1];
    }
};
