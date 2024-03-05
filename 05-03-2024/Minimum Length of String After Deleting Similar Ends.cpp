


//this is a functional code no header files or main are not include in it.
 int minimumLength(string s) {
        int i=0,j=s.size()-1;
       while(i<j)
       {
           if(s[i]==s[j])
           {
               char ch=s[i];
               while(i<j && s[i]==ch)
               {
                   i++;
               }
               while(i<=j && s[j]==ch)
               {
                   j--;
               }
           }
           else
           {
            //    cout<<"index break"<<i<<" "<<j<<endl;
               break;
           }
       }
    //    cout<<i<<" "<<j<<endl;
       return max(0,(j-i)+1);
    }