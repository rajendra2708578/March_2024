



//this contain only the functional code no header files or main are not included in it.
int pivotInteger(int n) {
        int sum=(n*(n+1))/2;
        int newsum=0;
        for(int i=1;i<=n;i++)
        {
            newsum+=i;
            if((sum+i)-newsum==newsum)
            return i;
        }
        return -1;
    }