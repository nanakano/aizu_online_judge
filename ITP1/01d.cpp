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
  
  int S;
  cin >> S;
  
  int h,m,s;

  h = S / 3600;
  m = S / 60 - h * 60;
  s = S - m * 60 - h * 3600;

  cout << h << ":" << m << ":" << s << endl;

  return 0;
}
