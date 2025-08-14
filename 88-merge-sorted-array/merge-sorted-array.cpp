class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> add;
        for(int i = 0;i<m;i++)add.push_back(nums1[i]);
        for(int j = 0;j<n;j++)add.push_back(nums2[j]);
        sort(add.begin(),add.end());    
        for(int i = 0;i<add.size();i++)nums1[i]=add[i];
    }
};