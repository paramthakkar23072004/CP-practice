int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int ans = arr[0];

        while(low <= high){
            int mid = low + ((high - low) / 2);

            ans = min(ans, arr[mid]);
            if(arr[low] < arr[high]){
                ans = min(ans, arr[low]);
                break;
            }
            if(arr[low] < arr[mid]){
                ans = min(ans, arr[low]);
                low = mid + 1;
            }
            else if(arr[mid] < arr[high]){
                high = mid - 1;
                ans = min(ans, arr[mid]);
            }

            else{
                if(arr[low] == arr[mid]){
                    low++;
                }else{
                    high--;
                }
            }
        }
        return ans;
    }
