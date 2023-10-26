    int upperBound(int &arr[], int n, int x){
        int low = 0;
        int high = n - 1;
        
        int ans = 0;
        while(low <= high){
            int mid = low + ((high-low) / 2);
            if(arr[mid] > x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    
    int lowerBound(int &arr[], int n, int x){
        int low = 0;
        int high = n - 1;
        int ans = 0;
        
        while(low <= high){
            int mid = low + ((high - low) / 2);
            if(arr[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        vector<int> ans;
       int lb = lowerBound(arr, n, x);
       if(lb == n || arr[lb] != x){
           ans.push_back(-1);
           ans.push_back(-1);
       }
       
       int ub = upperBound(arr, n, x);
       else{
           ans.push_back(lb);
           ans.push_back(ub - 1);
       }
       
       return ans;
    }
