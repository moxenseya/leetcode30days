class Solution {
public:
    bool isValid(string s) {
        cin.tie(NULL);
        ios_base::sync_with_stdio(0);
        
        stack <char> validator;
        char Top;
        for(char &c : s)
        {
            if(!validator.empty())
                Top = validator.top();
            //pop conditions
            if( c == ')' && !validator.empty() && Top == '(')
               validator.pop();
            else if( c == '}' && !validator.empty() && Top == '{')
                validator.pop();
            else if( c== ']' && !validator.empty() && Top == '[')
                validator.pop();
            //push conditions
            else if(c=='(' || c == '{' || c == '[')
                validator.push(c);
            //Incorrect state of string, return false
            else
                return false;
        }
        //stack push and pop successful, return true if empty
        return validator.empty();
    }
};