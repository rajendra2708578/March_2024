



//this is functional code no header files or main function are not included in it.

int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        int score=0;
        while(i<=j)
        {
            if(i==j)
            {
                if(tokens[i]<=power)
                {
                    score++;
                    
                }
                i++;
            }
            else if(tokens[i]<=power)
            {
                power-=tokens[i];
                score++;
                i++;
            }
            else
            {
                if(score>=1)
                {
                    power+=tokens[j];
                    j--;
                    score--;
                }
                else
                break;
            }
        }
        return max(0,score);
    }