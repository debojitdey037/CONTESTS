#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int height[n];
        for(int i = 0;i<n;i++){
            cin>>height[i];
        }
        int max = *max_element(height,height+n);
        int min = *min_element(height,height+n);
        
        int ans = max - min + 1;
        cout<<ans<<endl;
        
    }
    return 0;
}