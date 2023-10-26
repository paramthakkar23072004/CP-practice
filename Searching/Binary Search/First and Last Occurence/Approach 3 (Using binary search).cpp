int firstOccurence(int arr[], int n, int x){
        int low = 0;
        int high = n - 1;
        int first = -1;
        
        while(low <= high){
            int mid = low + ((high - low) / 2);
            if(arr[mid] == x){
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid] < x) {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return first;
    }
    
    int lastOccurence(int arr[], int n, int x){
        int low = 0;
        int high = n - 1;
        int last = -1;
        
        while(low <= high){
            int mid = low + ((high - low) / 2);
            if(arr[mid] == x){
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid] < x){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return last;
    }
    vector<int> find(int arr[], int n , int x )
    {
        vector<int> ans;
        ans.push_back(firstOccurence(arr, n, x));
        ans.push_back(lastOccurence(arr, n, x));
        
        return ans;
    }
