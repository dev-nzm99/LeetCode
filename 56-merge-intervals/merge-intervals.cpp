class Solution {
public:
    static bool compareator(const vector<int> &a,const vector<int> &b){
        return a[0]<b[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) return intervals;
        sort(intervals.begin(),intervals.end(),compareator);
        vector<vector<int>> result;
        vector<int> newInterval = intervals[0];
        result.push_back(newInterval);
        for(auto interval:intervals){
            if(interval[0]<=newInterval[1]){
                newInterval[1] = max(newInterval[1],interval[1]);
                result.back() = newInterval;
            }else{
                newInterval = interval;
                result.push_back(newInterval);
            }
        }
        return result;
    }
};