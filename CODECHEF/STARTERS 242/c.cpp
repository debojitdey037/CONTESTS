#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        
        int max = 0;
 
        for(int i = 0;i<K;i++){
            if(i%(2*N) == 0 || i%(2*N) == 2*N-1){
                max  = max + (K-i);
            }
                
        }
        cout<<max<<endl;
    }
return 0;
}

// #include <iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;

//         vector<int> v(n,0);
//         int i = 0;

//         while(k){
//             v[i] += k;
//             k--; i++;
//             if(i==n){
//                 i = 0;
//                 reverse(v.begin(),v.end());
//             }
//         }
        //  cout<< *max_element(v.begin(),v.end())<<endl;
//     }
// return 0;
// }