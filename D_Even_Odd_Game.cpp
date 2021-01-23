#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long int
#define vll vector<ll>




int main(){
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

    
    ll  test;
    cin >> test;
    while(test--){
        ll   n;
        cin >> n;
        vll a;
        for(ll i=0;i<n;i++){
            ll g;
            cin >> g;
            a.push_back(g);
        }
        sort(a.rbegin(),a.rend());
        ll ans =0;
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                if(a[i]%2 == 0){
                 ans = ans+a[i];
                }
            }
            else {
               if(a[i]%2 == 1){
                ans = ans - a[i];
               }
            }
        }
        if(ans ==0) cout << "Tie";
        else if(ans >0) cout << "Alice";
        else cout << "Bob";
        cout << endl;
        
    }
    return 0;
    
}