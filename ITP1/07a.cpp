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
  
  int m,f,r; 
  while(true){
    cin >> m >> f >> r;
    if(m == -1 && f==-1 && r==-1) break;
    if(m == -1 || f == -1) cout << "F" << endl;
    else if(80 <= m+f) cout << "A" << endl;
    else if(65 <= m+f and m+f < 80) cout << "B" << endl;
    else if(50 <= m+f and m+f < 65) cout << "C" << endl;
    else if(30 <= m+f and m+f < 50) {
      if(50 <= r ) cout << "C" << endl;
      else cout << "D" << endl;
    }
    else if(m+f < 30) cout << "F" << endl;
  }

  return 0;
}
