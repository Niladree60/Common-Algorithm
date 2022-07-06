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


    int binarySearch(int arr[], int l, int r, int x)
    {
      while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
          return m;


        if (arr[m] < x)
          l = m + 1;


        else
          r = m - 1;
      }

      return -1;
    }
    void solve()
    {
        ll n;
        cin >> n;
        int a[n+1];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        ll x = 12;
          int result = binarySearch(a, 0, n - 1, x);
         if(result == -1)
         {
            cout << "Not Found" << endl;
         }
         else cout << "Found" << endl;
    }
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        #ifndef ONLINE_JUDGE
        freopen("in.txt" , "r" , stdin);
        freopen("tt.txt" , "w" , stdout);
        #endif
        solve();


        return 0;
    }
             
