#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define ull unsigned long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define FOR(i,start,stop)  for(int i=(start); i < (stop); i++)
#define FORD(i,start,stop) for(int i=(start); i >= (stop); i--)
#define RIP(i,stop) FOR(i,0,stop)
#define PI 3.141592653589793
#define PRECISION(c,f) fixed << setprecision(c) << f
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int n,m; cin >> n >> m;
  int a[n][m], b[m], c[n];
  RIP(i,n) RIP(j,m) cin >> a[i][j];
  RIP(i,m) {cin >> b[i];}

  RIP(i,n) c[i] = 0;

  RIP(i,n){
    RIP(j,m){
      c[i] += a[i][j] * b[j];
    }
  }

  RIP(j,n) cout << c[j] << endl;

  return 0;
}
