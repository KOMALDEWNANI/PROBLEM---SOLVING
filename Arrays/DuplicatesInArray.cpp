class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        set<int> s;
        int i = 0;
        while(i<n){
            if(arr[i] != arr[arr[i]])
               swap(arr[i], arr[arr[i]]);
            else
               i++;
        }
        for(int i = 0 ; i < n; i++){
            if(i != arr[i])
                s.insert(arr[i]);
                
                
        }
        vector<int> v;
        for(auto j : s){
            v.push_back(j);
        }
        if(v.empty())
           v.push_back(-1);
        return v;
    }
};
