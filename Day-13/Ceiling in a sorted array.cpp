int ceilSearch(int arr[], int low, int high, int x) 
{
    if(x<arr[low])
        return arr[low];
    
    for(int i=low;i<high;i++)
    {
        if(x==arr[i])
            return arr[i];
        if(x>arr[i] && x<=arr[i+1])
        {
            return arr[i+1];
        }
    }
    return -1;
}