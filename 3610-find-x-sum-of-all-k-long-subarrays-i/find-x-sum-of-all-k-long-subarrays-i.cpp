/*
  Author:Nazmul Islam
  Created: 2025-11-17 13:40
  Using sliding window pattern
  Complexity: O(N∗Klogk) time & O(k) space
*/
class Solution {
public:
    vector<int> findXSum(vector<int>& arr, int k, int x) {
        vector<int> res;
        unordered_map<int, int> count;
        vector<pair<int, int>> p;
        /*----------------------Initial window---------------------------*/
        for (int i = 0; i < k; ++i)
            count[arr[i]]++;
        int xSum = 0;
        if (count.size() <= x) {
            for (int i = 0; i < k; ++i)
                xSum += arr[i];
        } else {
            for (auto [a, b] : count)
                p.push_back({a, b});
            sort(p.begin(), p.end(), [](pair<int, int>& x, pair<int, int>& y) {
                if (x.second == y.second)
                    return (x.first > y.first);
                return (x.second > y.second);
            });
            for (int i = 0; i < x; ++i)
                xSum += (p[i].first * p[i].second);
        }
        res.push_back(xSum);
        /*----------------------Sliding window----------------------------*/
        for (int i = k; i < arr.size(); ++i) {
            xSum = 0;
            p.clear();
            count[arr[i]]++;
            count[arr[i - k]]--;
            if (count[arr[i - k]] == 0)
                count.erase(arr[i - k]);

            if (count.size() <= x) {
                for (int j = i - k + 1; j <= i; ++j)
                    xSum += arr[j];
            } else {
                for (auto [a, b] : count)
                    p.push_back({a, b});
                sort(p.begin(), p.end(),
                     [](const pair<int, int>& x, const pair<int, int>& y) {
                         if (x.second == y.second)
                             return (x.first > y.first);
                         return (x.second > y.second);
                     });
                for (int j = 0; j < x; ++j)
                    xSum += (p[j].first * p[j].second);
            }
            res.push_back(xSum);
        }
        return res;
    }
};
