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
  
  double x1,y1,x2,y2; 
  //cin >> x1 >> y1 >> x2 >> y2;
  scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);


  double d;
  //d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

  //cout << d << endl;
  //cout << PRECISION(1,d) << endl;
  //cout << (double)hypot(x1-x2,y1-y2) << endl;
  printf("%lf",(double)hypot(x1-x2,y1-y2));
  //printf("%lf",d);

  return 0;
}
