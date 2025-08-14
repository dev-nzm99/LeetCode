class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int i = 0,j=0;
        string s = "";
        while(i<s1.length() && j<s2.length()){
            s+=s1[i++];s+=s2[j++];
        }
        while(i<s1.length())s+=s1[i++];
        while(j<s2.length())s+=s2[j++];
        return s;
    }
};