
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i, init, n) for (int i = init; i < (int)n; i++)
#define rev(i, n, init) for (int i = (int)n; i >= init; i--)
#define V vector<int>
#define VV vector<V>
#define Vll vector<ll>
#define VVll vector<Vll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define Vpii vector<pii>
#define VVpii vector<Vpii>
#define Vpll vector<pll> 
#define VVpll vector<Vpll>


int max_digit(int n) {
    int maxi = 0;
    while (n > 0) {
        maxi = max(maxi, n % 10);
        n /= 10;
    }
    return maxi;
}

int min_steps(int n) {
    if (n == 0) return 0; 
    return 1 + min_steps(n - max_digit(n)); 
}

int main() {
    int n;
    cin >> n;
    cout << min_steps(n) << endl;
    return 0;
}

