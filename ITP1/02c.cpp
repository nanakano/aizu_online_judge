#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
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
  
  int a;
  vector<int> v;
  FOR (i,3) { cin >> a; v.push_back(a);}

  sort(v.begin(),v.end());


  cout << v[0] << " " << v[1] << " " << v[2] << endl;;

  return 0;
}
