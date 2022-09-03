#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007 
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
const double pi = acos(-1.0);
template <class T> using Ordered_Set = tree<T, null_type, less<T>,
            rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,  
                     tree_order_statistics_node_update>
            ordered_multiset;


// find maximum sum of contiguous subarrays 
void solve()
{
    ll n;
    cin >> n;
    ll a[n+1];
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    ll sum = INT_MIN, cur = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        cur += a[i];
        sum = max(sum,cur);
        cur = max(0ll,cur);
    }
    cout << sum << endl;
    
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("ttt.txt" , "w" , stdout);
    #endif
    
    ll tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
