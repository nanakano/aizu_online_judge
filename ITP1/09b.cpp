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
  
  string s;
  int m;
  int h;
  string buf;
  int c=0;
  
  while(true){
    cin >> s;
    if(s == "-") break;
    cin  >> m;
    RIP(i,m) {
      cin >> h;
      RIP(j,h)
        s.push_back(s[j]);
      s.erase(s.begin(), s.begin()+h);
    }
    cout << s << endl;
  }

  return 0;
}
