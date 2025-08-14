class Solution {
public:
    int mySqrt(int x) {
        long long l=0,h=x,ans;
        if(x<2)return x;
        while(l<=h){
             long long mid=l+(h-l)/2;
            if(mid*mid == x)return mid;
            else if(mid*mid <x){
                ans=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return ans;
    }
};