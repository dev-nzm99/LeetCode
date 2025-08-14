class Solution {
public:
    int search(vector<int>& a, int key) {
        int n = a.size();
        int st=0,end=n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(a[mid]==key)return mid;
            else if(a[mid]<key) st = mid+1;
            else end=mid-1;
        }
        return -1;
    }
};