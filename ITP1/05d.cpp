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
  
  int n;
  cin >> n;

  int x;
  bool of = false;
  FOR(i,1,n){
    x = i; 
    if(x%3 == 0) of = true;
    else if(x%10 == 3) of = true;
    while(true){
      if(x / 10 == 0) break;
      x /= 10;
      if(x%10 == 3) of = true;
    }
    if(of) cout << " " << i;
    of = false;
  }

  cout << endl;

  return 0;
}
