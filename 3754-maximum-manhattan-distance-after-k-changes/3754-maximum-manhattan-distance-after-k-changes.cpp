class Solution {
public:
    int maxDistance(string s, int k) {
        map<char,int> mp;
        int ans=1;
        for(auto c:s){
            mp[c]++;
            int mx=0;
            char mxchar;
            for(auto [c,num]:mp){
                if(num>mx){
                    mx=num;
                    mxchar=c;
                }
            }
            int temp=k;
            if(c=='N' || c=='S'){
                if(temp<=min(mp['N'],mp['S'])){
                    int currans=abs(mp['N']-mp['S'])+abs(mp['E']-mp['W'])+2*temp;
                    ans=max(ans,currans);
                }
                else{
                    temp-=min(mp['N'],mp['S']);
                    if(temp<=min(mp['E'],mp['W'])){
                        int currans=mp['N']+mp['S']+abs(mp['E']-mp['W'])+2*temp;
                        ans=max(ans,currans);
                    }
                    else
                    {
                        int currans=mp['N']+mp['S']+mp['E']+mp['W'];
                        ans=max(ans,currans);
                    }
                }
            }
            else{
                if(temp<=min(mp['E'],mp['W'])){
                    int currans=abs(mp['E']-mp['W'])+abs(mp['N']-mp['S'])+2*temp;
                    ans=max(ans,currans);
                }
                else{
                    temp-=min(mp['E'],mp['W']);
                    if(temp<=min(mp['N'],mp['S'])){
                        int currans=mp['E']+mp['W']+abs(mp['N']-mp['S'])+2*temp;
                        ans=max(ans,currans);
                    }
                    else
                    {
                        int currans=mp['E']+mp['W']+mp['N']+mp['S'];
                        ans=max(ans,currans);
                    }
                }
            }
        }
        return ans;

    }
};