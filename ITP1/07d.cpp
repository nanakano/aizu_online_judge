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
  
  int n,m,l; cin >> n >> m >> l;
  ll a[101][101]={0},b[101][101]={0},c[101][101]={0};

  RIP(i,n)RIP(j,m) cin >> a[i][j];
  RIP(i,m)RIP(j,l) cin >> b[i][j];

  RIP(i,n){
    RIP(j,m){
      RIP(k,l){
        c[i][k] += a[i][j] * b[j][k];
      }
    }
  }

  RIP(i,n){
    RIP(j,l){
      if(j != l-1) cout << c[i][j] << " ";
      else cout << c[i][j];
    }
    cout << endl;
  }

  return 0;
}
