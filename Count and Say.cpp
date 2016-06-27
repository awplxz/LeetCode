class Solution {
public:
    string countAndSay(int n) {
        string x = "1";
        if(n == 1)
            return x;
        while(--n){
            int k = x.length(),p=0;
            string y = "";
            for(int i = 0;i < k;i++){
                int count = 1;
                while(i+1<k&&x[i] == x[i+1]){
                    count++;
                    i++;
                }
                y += to_string(count) + x[i];
            }
            x = y;
        }
        return x;
    }
};