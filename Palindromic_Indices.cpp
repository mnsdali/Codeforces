#include <bits/stdc++.h>
 
using namespace std;
#define f(i, b, e) for (int i = b; i < e; i++)
#define frev(i,e,b) for (int i=e; i>=b; i--)
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    if (n%2){
        frev(i,n/2-1,0){
            if (s[i]!=s[n/2]) break;
            ans ++;
        }
        cout << (ans*2)+1<< endl;}
    else{
        frev(i,n/2-1,0){
            if (s[i]!=s[n/2]) break;
            ans++;
        }
        cout << ans*2<<endl;
    }
    
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
