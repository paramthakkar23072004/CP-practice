#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int x;
    cin >> x;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            ans = i;
        }
    }
    
    cout << ans << endl;
}
