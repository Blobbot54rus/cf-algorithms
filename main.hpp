#pragma GCC optimize("O3")
#include <bits/stdc++.h>


// All the typedefs
typedef long long ll;
#define int ll
typedef long double ld;
#define double ld
typedef unsigned long long ull;

using namespace std;

// All the regular defines
#define all(x) std::begin(x),std::end(x)
#define rall(x) std::rbegin(x),std::rend(x)
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vpii vector<pii>
#define fi first
#define se second
#define eb emplace_back
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define tri tuple<int,int,int>
#define quad tuple<int,int,int,int>
#define pent tuple<int,int,int,int,int>

// All the constants
const int INF = numeric_limits<int>::max()/3;
const int MOD = int(2e9+11);
const double PI = acosl(-1.0L);
const int MAX_N = int(2e5);

// Random
mt19937_64 RNG(ull(chrono::high_resolution_clock::now().time_since_epoch().count()));

int rint(int from, int to) {
  uniform_int_distribution<int> d(from, to);
  return d(RNG);
}