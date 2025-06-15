class Solution {
public:
    int minMaxDifference(int num) {
        int mx,mn;
        mx=mn=num;
        for(int d1=0;d1<=9;d1++){
            for(int d2=0;d2<=9;d2++){
                if(d1==d2) continue;
                string str=to_string(num);
                for(int i=0;i<str.size();i++){
                    if(str[i]-'0'==d1){
                        str[i]=d2+'0';
                    }
                }
                mx=max(mx,stoi(str));
                mn=min(mn,stoi(str));
            }
        }
        return mx-mn;
    }
};