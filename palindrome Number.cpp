class Solution {
public:
    bool isPalindrome(int x) {
    long digit ;
    long original = x;
    long reversed = 0;
    if(x<0)
        return false;
    else{
    while(x!=0){
        digit = x %10;
        reversed = (reversed *10)+ digit;
        x = x/10;
    }
    if (reversed== original)  
        return true ;
    else    
        return false ;
    }

}
};