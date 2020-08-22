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
  
  int x,y;
  for(int i=0; ;i++){
    cin >> x >> y;
    if(x == 0 && y == 0) break;
    if(x < y) cout << x << " " << y << endl;
    else cout << y << " " << x << endl;
  }

  return 0;
}
