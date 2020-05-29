class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(),banned.end()); //create unordered set for fast retreival
        unordered_map<string,int> count;
        for(auto &c: paragraph)
            c = isalpha(c) ? tolower(c) : ' '; //if alphabet, convert to lower, else change punctuation to space
        istringstream iss(paragraph);
        string s;
        pair<string,int> max_pair("",0);
        while(iss>>s) //keep taking words from iss and put it into s
        {
            if(ban.find(s)==ban.end() && ++count[s] > max_pair.second)
                max_pair = make_pair(s,count[s]);
        }
        return max_pair.first;
    }
};