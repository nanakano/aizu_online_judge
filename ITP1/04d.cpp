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
#define PRECISION(c,f) fixed << setprecision(c) << f
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  ll n;
  cin >> n;
  ll a[n];
  ll max=0,min=0,sum=0;
  FOR(i,n) {
    cin >> a[i];
    if(i==0){max = a[i]; min = a[i];}
    if(max < a[i]) max = a[i];
    if(min > a[i]) min = a[i];
    sum += a[i];
  }

  cout << min << " " << max << " " << sum << endl;

  return 0;
}
