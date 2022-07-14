class Solution {
public:
    int maxArea(vector<int>& height) {
        int vol = 0;
        for(int i = 0, j = height.size() - 1; i < j;){
            int h = min(height[i], height[j]);
            vol = max(vol, (j - i) * h);
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
            
        }
        return vol;
    }
};
