class Solution {
public:
    
    
    bool backspaceCompare(string S, string T) {
    stack<char> s1;
    stack<char> s2;
    string op1 = "";
    string op2 = "";
        char x;
        for(int i =0;i<S.size();i++)
        {
            if(S[i]=='#' && !s1.empty())
                s1.pop();
            else if(S[i]!='#')
            s1.push(S[i]);
        }
        
        
        while(!s1.empty())
        {
            x = s1.top();
            op1+=x;
            s1.pop();
        }
        cout << "Final String s1: " << op1 << endl;
        
        for(int i =0;i<T.size();i++)
        {
            if(T[i]=='#' && !s2.empty())
                s2.pop();
            else if (T[i]!='#')
            s2.push(T[i]);
        }
        
        
        while(!s2.empty())
        {
            x = s2.top();
            op2+=x;
            s2.pop();
        }
        cout << "Final String s2: " << op2 << endl;
        
        if(op1==op2)
            return true;
        else
            return false;
        
    }
};