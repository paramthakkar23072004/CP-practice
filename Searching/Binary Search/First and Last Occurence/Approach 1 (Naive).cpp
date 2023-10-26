vector<int> find(int arr[], int n , int x )
    {
        int first = -1;
        int last = -1;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == x){
                if(first == -1){
                    first = i;
                }
                last = i;
            }
        }
        
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        
        return ans;
    }
