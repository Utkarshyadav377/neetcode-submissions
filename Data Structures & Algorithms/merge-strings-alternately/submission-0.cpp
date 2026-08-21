class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();

        int i = 0;
        int j = 0;
        int k = 0;
        string ans = "";

        while(i < n1 && j < n2) {
            if(k % 2 == 0) {
                ans += word1[i];
                i++;
                k++;
            }
            else {
                ans += word2[j];
                j++;
                k++;
            }
        }

        if(i < n1) ans += word1.substr(i, n1 - i);
        if(j < n2) ans += word2.substr(j, n2 - j);

        return ans;
    }
};