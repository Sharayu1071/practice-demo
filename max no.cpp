
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    string findMax(string N) {
        // code here
        
        sort(N.begin(),N.end());
        
        for(int i=(N.length()-1);i>=0;i--){
            cout<<N[i];
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.findMax(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
