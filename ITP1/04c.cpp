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
  
  int a,b;
  char op;

  for(int i=0; ; i++){
    cin >> a >> op >> b;
    if(op == '+') cout << a + b << endl;
    if(op == '-') cout << a - b << endl;
    if(op == '*') cout << a * b << endl;
    if(op == '/') cout << a / b << endl;
    if(op == '?') break;
  }

  return 0;
}
