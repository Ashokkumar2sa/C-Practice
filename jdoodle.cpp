#include <iostream>
#include<vector>
#define  vn  vector<int>

using namespace std;

int main() {
    vn C;
    vn R;
    int n ;
    cin >> n;
    C.push_back(0);
    for(int i=0;i<n;i++){
        int s ;
        cin >> s;
        C.push_back(s);
        
    }
   for(int i=0;i<=n;i++){
        
        R.push_back(0);
    }

    
    for(int i=1;i<=n;i++){
        int p =0;
        for(int j=1;j<=i;j++){
            R[i] = R[i-j] + C[j];
            if(R[i]>p) p = R[i];
            
        }
        R[i] = p ;
    }
    cout << R[n] ; 
    
    
}