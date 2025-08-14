class NumArray {
    vector<int> prefix_sum;
public:
    NumArray(vector<int>& a) {
        prefix_sum.resize(a.size()+1,0);
        for(int i=0;i<a.size();i++)
           prefix_sum[i+1]=prefix_sum[i]+a[i];
    }
    
    int sumRange(int left, int right) {
        return prefix_sum[right+1]-prefix_sum[left];
    }
};

