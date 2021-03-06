#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#define ll long long
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
  
  int w,h,x,y,r;
  cin >> w >> h >> x >> y >> r;

  if(w < x+r || w < x-r || w < x) no;
  else if(h < y+r || h < y-r || h < y) no;
  else if(0 > y+r || 0 > y-r || 0 > y) no;
  else if(0 > x+r || 0 > x-r || 0 > x) no;
  else yes;

  return 0;
}
