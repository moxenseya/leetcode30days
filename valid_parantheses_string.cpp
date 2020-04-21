class Solution {
public:
    bool checkValidString(string s) {
       stack<int> stakk;
       stack<int> stars;
           
        
        for(int i =0;i<s.size();i++)
        {
         if(s[i]=='(')
         {
             stakk.push(i);
         }
            if(s[i]=='*')
            {
                stars.push(i);
            }
            if(s[i]==')')
            {
                if(!stakk.empty())
                    stakk.pop();
                 else if(!stars.empty())
                stars.pop();
                else
                    return false; //Deals with )( cases
            }
           
            
        }
       
        int stak_val;
        int star_val;
        while(!stakk.empty() && !stars.empty())
        { 
            if(stakk.top()>stars.top()) //Compare indices to check if stars before (.
                return false;
            stakk.pop();
            stars.pop();
        }
        return stakk.empty();
    }
};