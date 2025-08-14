class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
         //if(a.size()==1)return a[0];
         int st=0,end=a.size()-1;
         int ans;
         while(st<=end){
            //int mid =st+(end-st)/2;
            int mid = end+(st-end)/2;
            if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]){ans=mid;break;}
            else if(a[mid]>a[mid-1]) st=mid+1;
            else end=mid-1;
         }
         return ans;
    }
};