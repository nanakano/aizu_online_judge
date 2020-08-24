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
#define FOR(i,start,stop)  for(int i=(start); i <= (stop); i++)
#define FORD(i,start,stop) for(int i=(start); i >= (stop); i--)
#define RIP(i,stop) FOR(i,0,stop)
#define PI 3.141592653589793
#define PRECISION(c,f) fixed << setprecision(c) << f
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int n,x;
  int ans=0;
  while(true){
    cin >> n >> x;
    if(n==0&&x==0) break;

    FOR(i,1,n){
      FOR(j,i+1,n){
        FOR(k,j+1,n){
          if(i + j + k == x) 
            ans++;
        }
      }
    }
    //break;
    cout << ans << endl;
    ans = 0;
  }

  return 0;
}
