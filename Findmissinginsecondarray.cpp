
#include <bits/stdc++.h>
using namespace std;

 
class Solution{
	
	
	public:
	vector<long long> findMissing(long long a[], long long b[],  
                 int n, int m) 
	{ 
	   vector<long long> g;
	   
	   unordered_set<long long> b1;
	   for(int i=0; i<m;i++){
	       b1. insert(b[i]);
	   }
	   
	       
	       for(int j=0; j<n; j++){
	         
                 
            if(b1.find(a[j])==b1.end()){
	               g.push_back(a[j]);
	           
	           
	           }
	           
	       }
	      
	      
	      
	       
	   
	 return g;
	} 
};
	



int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
} 
