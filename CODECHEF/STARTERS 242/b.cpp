#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    string A;
	    cin>>A;
	    
	    string B;
	    cin>>B;
	    
	    string ans;
	    
	    for(int i = 0;i<n && i<m;i++){
	        
	        if(A[i]==B[i]){
	           ans = ans + A[i];
	        }else{
	            break;
	        }
	    }
	    
	    cout<<ans<<endl;
	}
return 0;
}
