class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int maxi = INT_MIN;

        while (start < end) {
            int h = min(height[start], height[end]);
            int w = end - start;
            int area = h * w;
            maxi = max(maxi, area);

            if (height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
        }

        return maxi;
    }
};
