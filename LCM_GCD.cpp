//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
     int gcd(long long a,long long b){
        if(b==0) return a;
        
        return gcd(b,a%b);
            
        }
    public:
 
        vector<long long> lcmAndGcd(long long A , long long B) {
           vector<long long> p;
        //   if(A<B){
        //       long long t = A;
        //       A = B;
        //       B = t;
        //   }
           long long cd = gcd(A,B), lcm = (A*B)/cd;
           
            p.push_back(lcm); //lcm
            p.push_back(cd); //gcd
            return p;
        }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
