// https://leetcode.com/problems/detect-capital/
class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length()<2) return true;
        int isCap = 0;
        if(word[0]>=97 && word[1]>=97) isCap = 0;
        else if(word[0]<=93 && word[1]>=97) isCap = 1;
        else if(word[0]<=93 && word[1]<=93) isCap = 2;
        else return false;
        for(int i=2;i<word.length();i++){
            if(isCap == 0 && word[i]<=93) return false;
            if(isCap == 1 && word[i]<=93) return false;
            if(isCap == 2 && word[i]>=97) return false;
        }
        return true;
    }
};