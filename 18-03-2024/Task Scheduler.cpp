




//this code contain only the functional code neither header files nor main function are included in it.
 int leastInterval(vector<char>& tasks, int n) {
       vector<int>freq(26);
       for(auto it:tasks)
       {
         freq[it-'A']++;
       }
       sort(freq.begin(),freq.end());
       int maxfreq=freq[25]-1;
       int total=(maxfreq*n);
       for(int i=24;i>=0 && freq[i]>0;i--)
       {
         total-=min(maxfreq,freq[i]);
       }
       if(total>0)
       return total+tasks.size();
       else
       return tasks.size();

    }