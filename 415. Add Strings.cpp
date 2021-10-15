// https://leetcode.com/problems/add-strings/
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length()-1;
        int j = num2.length()-1;
        vector<int> v;
        int carry = 0;
        while(i>=0 || j>=0){
            int sum = carry;
            if(i>=0){
              sum += num1[i--] -'0';
            }
            if(j>=0){
              sum += num2[j--] -'0';
            }
            v.push_back(sum%10);
            carry = sum/10;
        }
        if(carry!=0){
            v.push_back(carry);
        }
        string s="";
        for(int i=v.size()-1;i>=0;i--){
            s+=to_string(v[i]);
        }
        return s;
    }
};