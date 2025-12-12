class Solution {
public:
    bool isValid(string s) {
        stack<char> op;
        for(char c : s){
            if(c=='('||c=='['||c=='{')
            op.push(c);
            else{
                if(op.empty()) return false;
                char top = op.top();
                if ((c == ')' && top !='(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '['))
                    return false;
                    op.pop();
            }
        }
        return op.empty();
    }
};