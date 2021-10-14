#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() == 0)
            return "";
        
        int st = 0;
        
        int n = s.size();
        
        int len = 1;
        
        vector<vector<int>> dp(n, vector<int> (n, 0));
        
        for(int i = 0; i < s.size(); i++)
            dp[i][i] = 1;
        
        for(int i = 0; i < n-1; i++)
        {
            if(s[i] == s[i+1])
            {
                dp[i][i+1] = 1;
                
                if(len < 2)
                {
                    st = i;
                    len = 2;
                }
            }
        }
        
        for(int k = 3; k <= n; k++)
        {
            for(int i = 0; i < n - k + 1; i++)
            {
                int j = i + k - 1;
                
                if(s[i] == s[j] && dp[i+1][j-1] == 1)
                {
                    dp[i][j] = 1;
                    
                    if(k > len)
                    {
                        len = k;
                        st = i;
                    }
                }
            }
        }
        
        string res = "";
        
        for(int i = st; i <= (st + len - 1); i++)
            res += s[i];
        
        return res;
    }
};

int main()
{
  string str, ans;
  
  cout<<"Enter String here :- ";
  cin>>str;
  
  Solution obj;
  
  ans = obj.longestPalindrome(str);
  
  cout<<"longest Palindrome Substring : "<<ans;
}
