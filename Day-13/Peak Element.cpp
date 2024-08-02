//An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements 

int peakElement(int arr[], int n)
    {
       // Your code here
       int maxval=arr[0];
       int index=0;
       for(int i=1;i<n;i++)
       {
           if(arr[i]>maxval)
           {
               maxval=arr[i];
               index=i;
           }
       }
       return index;
    }