/*
 Author:Nazmul Islam
 Complexity: O(n)
*/
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int l = 0, r = n - 1, cnt = 0;
        while (l <= r) {
            int s = people[l] + people[r];
            if (s <= limit) {
                l++;
                r--;
            } else if (people[r] <= limit) {
                r--;
            } else {
                l++;
            }
            cnt++;
        }
        return cnt;
    }
};