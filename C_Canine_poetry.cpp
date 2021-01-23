#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long int
#define vll vector<ll>




int main(){

    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
    //Let,s Do this 
    ll  test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        ll n = s.length();
        ll a[n];
        int num=0;
        for(ll i=0;i<n;i++) a[i] = 0;

        for(ll i=1;i<n;i++){
            ll x =0;
            if(s[i] == s[i-1] && a[i-1]==0) x=1;
            else if(i>1 && s[i] == s[i-2] && a[i-2]==0) x =1;

            a[i]= x;
            num = num + a[i];

        }

         cout << num << endl;

    }
    return 0;
    
}