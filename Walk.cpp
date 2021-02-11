#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int ret = 0;
	    for(int i = 0;i<n;++i){
	        int w;
	        cin>>w; 
	        
	        /*
	        Minimum weight required at a particular segment would be 
	        W[i] + (no. of segments before current one)
	        since at every segment the weight reduces by alleast one 
	        so maximum of all the required minimum weights is going to
	        be our answer such that v never becomes less than W[i].
	        */
	        ret = max(ret,w+i);
	        
	        
	    }
	    cout<<ret<<"\n";
	}
	
	return 0;
}
