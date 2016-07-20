class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0,j = n-1;
        while(i<j){
            if(!isalnum(s[i]))
                i++;
            else if(!isalnum(s[j]))
                j--;
            else{
                if(toupper(s[i++]) != toupper(s[j--]))
                    return false;
            }
        }
        return true;
    }
};