class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int mx_area = 0;
        while(i<j){
           int h = min(height[i],height[j]);
           int w = j-i;
           mx_area = max(mx_area,(h*w));
           (height[i]<=height[j])?i++:j--;
        } 
        return mx_area;    
    }
};