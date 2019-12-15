class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> myStack ;
  for(unsigned int i =0;i< S.length();i++){
    if(myStack.empty()){
      myStack.push(S[i]);
      }else{
        if(S[i]==myStack.top()){
            myStack.pop();
        }
        else
            myStack.push(S[i]);
    }
  }

string result = "";
while(!myStack.empty()){
    result +=myStack.top();
    myStack.pop();
}
reverse(result.begin(), result.end());
return result ;     
}
};