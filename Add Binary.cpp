class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.length()-1;
        int m = b.length()-1;
        string s = "";
        int index = 0;
        while(n >= 0 || m >= 0|| index == 1 )
        {
            index += (n>=0?a[n--]-'0':0);
            index += (m>=0?b[m--]-'0':0); 
            s = char(index % 2 + '0') + s;
            index /= 2;
        }
        return s;
    }
};