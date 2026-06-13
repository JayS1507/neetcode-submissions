class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                store.push(ch);
            }else{
                if(store.empty()){
                    return false;
                }

                char top = store.top();
                if((top == '{' && ch == '}') || (top == '[' && ch == ']') || (top == '(' && ch == ')') ){
                    store.pop();
                }else{
                    return false;
                }
            }
        } 
        return store.empty();
    }
};
