



//this code is not a functional code no header files or main are not included in it.
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int maxv=arr[0];
       for(int i=0;i<n;i++)
       {
           maxv=max(maxv,arr[i]);
       }
       for(int i=0;i<n;i++)
       {
           if(maxv==arr[i])
           return i;
       }
       return 0;
    }
};