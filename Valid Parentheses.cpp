class Solution {
public:
    bool isValid(string s) {
        stack<int> res;
        map<char,char> index = {
                                {'(',')'},
                                {'[',']'},
                                {'{','}'}
                                };
        for(auto& a:s){
            switch(a){
                case '(':
                case '[':
                case '{':res.push(a);break;
                case ')':if(res.empty()||res.top()!='(') return false;res.pop();break;
                case ']':if(res.empty()||res.top()!='[') return false;res.pop();break;
                case '}':if(res.empty()||res.top()!='{') return false;res.pop();break;
            }
        }
        return res.empty();
    }
};