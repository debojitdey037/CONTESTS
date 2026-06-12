// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int a,b,c;
// 	    cin>>a>>b>>c;
	    
// 	    if(a==b){
// 	        cout<<0<<endl;
// 	    }
// 	    else if(__gcd(a,c)==__gcd(b,c)){
// 	        cout<<1<<endl;
// 	    }
// 	    else if(__gcd(a,c+1)==__gcd(b,c+1)){
// 	        cout<<2<<endl;
// 	    }
// 	    else{
// 	        cout<<3<<endl;
// 	    }
// 	}
// return 0;
// }


// Self Tried

// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
	
// 	while(t--){
// 	   int a,b,c;
// 	   cin>>a>>b>>c;
	   
// 	   int cnt = 0;
	   
// 	   while(a!=b){
// 	       if(gcd(a,c) == gcd(b,c)){
// 	           cnt++;
// 	           a = gcd(a,c);
// 	           b = gcd(b,c);
// 	           break;
// 	       }else{
// 	           c++;
//             cnt++
// 	       }
// 	   }
// 	   cout<<cnt<<endl;
// 	}
// return 0;
// }

// Not Submitted just tried
