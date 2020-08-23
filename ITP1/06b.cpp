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
  
  int s[14]={0};
  int h[14]={0};
  int c[14]={0};
  int d[14]={0};
  char w;
  int n,a;

  cin >> n;
  RIP(i,n){
    cin >> w >> a;
    if(w == 'S')
      s[a]++;
    if(w == 'H')
      h[a]++;
    if(w == 'C')
      c[a]++;
    if(w == 'D')
      d[a]++;
  }
  FOR(i,1,14)
    if(s[i] == 0) cout << "S " << i << endl;
  FOR(i,1,14)
    if(h[i] == 0) cout << "H " << i << endl;
  FOR(i,1,14)
    if(c[i] == 0) cout << "C " << i << endl;
  FOR(i,1,14)
    if(d[i] == 0) cout << "D " << i << endl;
 
  return 0;
}
