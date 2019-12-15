#include<string>
#include<stack>
class Solution {
public:
   bool isValid(string s) {
     stack<char> myStack;
    for(unsigned int i = 0 ; i < s.length(); i++){
        if(s.at(i)=='(' || s.at(i)=='{' || s.at(i)== '['){
            myStack.push(s[i]);
            }else if(!myStack.empty() && s[i] == ')' && myStack.top()=='('){
                myStack.pop();
            }else if(!myStack.empty() && s[i] == ']' && myStack.top()=='['){
                myStack.pop();
            }else if(!myStack.empty() && s[i] == '}' && myStack.top()=='{'){
                myStack.pop();
                }else
                    return false;
    }
    if(!myStack.empty()){
        return false;
    }else
        return true;
}
};