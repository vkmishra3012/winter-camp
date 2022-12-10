class Solution {
  private:
   bool isValid(char ch)
    {
        if((ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return 1;
        else 
        return 0;
    }
   char toLowerCase(char ch)
    {
        if((ch >= 'a' && ch <= 'z' ) || (ch >= '0' && ch <= '9' ))
      {  return ch;}
        else 
       { char temp = ch -'A' + 'a'; 
        return temp;}
    }

     bool checkPalindrome(string s)
      {
             int start = 0;
    int e = s.length()-1;

    while(start<=e) {
        if(s[start] == s[e])
        {
            start++;
            e--;
        }
        else{
            return 0;       
        }
    }
    return 1;
      }
public:

    bool isPalindrome(string s) {
        string temp = "";
        for(int j= 0; j<s.length(); j++)
        {
           if(isValid(s[j]))
           temp.push_back(s[j]);
        }

      for(int j= 0; j<temp.length(); j++)
      {
          temp[j] = toLowerCase(temp[j]);
      }
      return checkPalindrome(temp);
    }
};
