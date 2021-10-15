// https://leetcode.com/problems/k-diff-pairs-in-an-array/
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        unordered_set<int> uset;
        set<pair<int, int>> s;
        int count =0;
        for(int num : nums){
            if(uset.find(num-k) != uset.end()) s.insert({num-k, num});
            uset.insert(num);
        }
        
        return s.size();
    }
};