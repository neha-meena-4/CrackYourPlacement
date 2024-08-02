int findPair(int n, int x, vector<int> &arr) 
{
        // code here
        sort(arr.begin(),arr.end());
        int  low=0, high=1;
        while(high<n)
        {
            int diff=arr[high]-arr[low];
            if(low!=high && diff ==x)
                return 1;
            else if(diff > x)
                low++;
            else
                high++;
            if(low==high)
                high++;
                
                
        }
        return -1;
}