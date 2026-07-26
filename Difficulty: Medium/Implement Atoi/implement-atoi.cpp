class Solution {
  public:
    int myAtoi(string &s) {
        // code here
        int sign =1,idx =0;
        int n = s.length();
        while(idx<n && s[idx]==' '){
            idx++;
        }
        if(idx<n && (s[idx] == '+' || s[idx] == '-')){
            if(s[idx]=='-')sign = -1;
            idx++;
        }
        long long res=0;
        while(idx<n && isdigit(s[idx])){
            res = res*10 + (s[idx]-'0');
            if(sign == 1 && res>=INT_MAX ){
            return INT_MAX;
        }if(sign ==-1 && -res<=INT_MIN ){
            return INT_MIN;
        }
        idx++;
        
        }
      
        return (int)(sign*res);
        
    }
};
