class Solution {
public:
    int searchInsert(vector<int>& a, int key) {
        int l=0,h=a.size()-1,indx=a.size();
        while(l<=h){
            int mid=l+(h-l)/2;
            if(a[mid]==key)return mid;
            else if(a[mid]>key){
                indx=mid;
                h=mid-1;
            }
            else{
               //if(l==h)indx=mid+1;
               l=mid+1;
               
            }
        }
        return indx;
    }
};