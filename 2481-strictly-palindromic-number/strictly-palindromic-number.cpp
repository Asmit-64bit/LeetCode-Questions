class Solution {
public:
    bool ispalindrome(string s)
    {
        for(int i = 0 ; i <s.size()/2;i++)
        {
            if(s[i] != s[s.size()-1-i])
                return false;
        }
        return true;
    }
    string getbase(int n, int b)
    {
        string s="";
        while(n>0)
        {
            int d = n%b;
            s = (char)(d+'0') + s;
            n/=b;
        }
        return s;
    }
    bool isStrictlyPalindromic(int n) 
    {
        for(int i=2 ; i <= n-2 ; i++)
        {
            if(!ispalindrome(getbase(n,i)))
                return false;
        }
        return true;
    }
};