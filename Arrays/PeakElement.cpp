class Solution
{
    public:
    
    int peakElement(int arr[], int n)
    {
       // Your code here
       if(n == 1)
          return 0;
       else if(n == 2)
         return arr[0] > arr[1] ? 0 : 1;
       int low = 1, high = n-2;
       int mid;
       while(low <= high){
           mid = low + (high - low)/2;
           if(arr[mid] > arr[mid -1] && arr[mid] > arr[mid + 1])
                return mid;
           else if(arr[mid] > arr[mid - 1])
                low = mid+1;
           else
               high = mid - 1;
               
       }
       if(arr[0] > arr[1])
           return 0;
       if(arr[n-1] > arr[n-2])
          return n-1;
    }
    
};
