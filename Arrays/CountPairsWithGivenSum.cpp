class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> ourmap;
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] <= k)
               { if(ourmap.count(k - arr[i]) > 0)
                          count += ourmap[k-arr[i]] ;
                ourmap[arr[i]]++;}
        }
        return count;
    }
};
