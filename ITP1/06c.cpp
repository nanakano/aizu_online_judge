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
  
  int n; cin >> n;
  int b,f,r,v;

  int f1[3][10] = {0};
  int f2[3][10] = {0};
  int f3[3][10] = {0};
  int f4[3][10] = {0};

  RIP(i,n){
    cin >> b >> f >> r >> v;
    if(b == 1)
      f1[f-1][r-1] += v;
    if(b == 2)
      f2[f-1][r-1] += v;
    if(b == 3)
      f3[f-1][r-1] += v;
    if(b == 4)
      f4[f-1][r-1] += v;
  }

  RIP(i,3){
    RIP(j,10){
      cout << " " << f1[i][j];
    }
    cout << endl;
  }
  cout << "####################" << endl;
  RIP(i,3){
    RIP(j,10){
      cout << " " << f2[i][j];
    }
    cout << endl;
  }
  cout << "####################" << endl;
  RIP(i,3){
    RIP(j,10){
      cout << " " << f3[i][j];
    }
    cout << endl;
  }
  cout << "####################" << endl;
  RIP(i,3){
    RIP(j,10){
      cout << " " << f4[i][j];
    }
    cout << endl;
  }


  
  return 0;
}
