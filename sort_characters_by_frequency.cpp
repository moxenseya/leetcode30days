class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mymap;
        
        for(char x: s)
        {
            if(mymap.find(x)==mymap.end())
                mymap.insert(make_pair(x,1));
            else
            {
                mymap[x]++;
            }
        }
        
        multimap<int,char> charmap;
        for(map<char,int>::iterator it=mymap.begin();it!=mymap.end();++it)
        {
            //cout << it->first << " " << it->second << endl;
            
            charmap.insert(make_pair(it->second,it->first));
        }
        
        string op = "";
        for(map<int,char>::reverse_iterator it=charmap.rbegin();it!=charmap.rend();++it)
        {
            int count = it->first;
            
            while(count>0)
            {
                op += it->second;
                count--;
            }
        }
        
        return op;
    }
};