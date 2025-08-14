class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string r = "";
        sort(strs.begin(),strs.end());
        string st = strs[0];
        string en = strs[strs.size()-1];
        for(int i = 0;i<st.length();i++){
            if(st[i]==en[i])r+=st[i];
            else break;
        }
        return r;
    } 
};