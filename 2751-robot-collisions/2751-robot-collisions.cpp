
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<pair<pair<int,int>,pair<char,int>>> bot;

        for(int i=0;i<healths.size();i++)
        {
            bot.push_back({{positions[i],healths[i]},{directions[i],i}});
        }

        sort(bot.begin(),bot.end());

        vector<int> t(healths.size(),0);
        stack<pair<pair<int,char>,int>> st;

        for(auto& i:bot)
        {
            int h=i.first.second;
            char d=i.second.first;
            int idx=i.second.second;

            if(st.empty() || st.top().first.second=='L' || d=='R')
            {
                st.push({{h,d},idx});
                continue;
            }

            while(!st.empty() && st.top().first.second=='R')
            {
                int r=st.top().first.first;

                if(r>h)
                {
                    st.top().first.first--;
                    h=0;
                    break;
                }
                else if(r==h)
                {
                    st.pop();
                    h=0;
                    break;
                }
                else
                {
                    st.pop();
                    h--;
                }
            }

            if(h>0)
            {
                st.push({{h,d},idx});
            }
        }

        while(!st.empty())
        {
            t[st.top().second]=st.top().first.first;
            st.pop();
        }

        vector<int> ans;

        for(int i=0;i<t.size();i++)
        {
            if(t[i]>0)
                ans.push_back(t[i]);
        }

        return ans;
    }
};
