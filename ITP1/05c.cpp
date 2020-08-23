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
  
  int h,w;
  while(true){
    cin >> h >> w;
    if(h == 0 && w == 0) break;
    RIP(i,h){
      RIP(j,w){
        if(i%2 != 0) {
          if(j%2 != 0) cout << "#";
          else cout << ".";
        }
        else {
          if(j%2 == 0) cout << "#";
          else cout << ".";
        }
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
