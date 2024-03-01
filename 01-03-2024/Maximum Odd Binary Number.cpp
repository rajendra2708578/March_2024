


//this code is functional code no header files or main are not included in it.
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int zero=0,one=0;
        for(auto it:s)
        {
            if(it=='1')
            one++;
            else
            zero++;
        }
        string ans="";
        for(int i=0;i<one-1;i++)
        ans+='1';
        for(int i=0;i<zero;i++)
        ans+='0';
        if(one>=1)
        ans+='1';
        return ans;
    }
};