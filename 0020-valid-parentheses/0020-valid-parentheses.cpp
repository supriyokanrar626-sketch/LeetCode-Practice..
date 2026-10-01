class Solution {
public:
    bool isValid(string s) {
        stack<char>gun ;
        for(char c : s)
        {
            if(c == '['||c=='('||c=='{')
            {
                gun.push(c) ;
            }
            else
            {
              if(gun.empty()) return false ;
              if(c == ')' && gun.top() != '(') return false ;
              if(c == '}' && gun.top() != '{') return false ;
              if(c == ']' && gun.top() != '[') return false ;
              gun.pop() ;
            }
        }
        return gun.empty() ;
    }
};