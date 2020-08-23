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
#define FOR(i, stop) for(int i = 0; i < (stop); i++)
#define PI 3.141592653589793
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int a,b;
  cin >> a >> b;

  int d,r;
  double f;

  d = a/b;
  r=a%b;
  f = (double)a/(double)b;

  cout << d << " " << r << " " << fixed << setprecision(8) << f << endl;

  return 0;
}
