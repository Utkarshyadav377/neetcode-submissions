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
            ans += word1[i];
            ans += word2[j];

            i++;
            j++;
        }

        ans += word1.substr(i);
        ans += word2.substr(j);

        return ans;
    }
};