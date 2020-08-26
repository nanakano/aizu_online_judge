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
  
  string str,str1,com;
  int a,b,q;
  cin >> str >> q;
  while(q--){
    cin  >> com >> a >> b;
    if(com == "print"){
      cout << str.substr(a,b-a+1) <<endl;
    }else if(com == "reverse"){
      for(int i=a, j=b; i<j; i++, j--)
        swap(str[i],str[j]);
    }else{
      cin >> str1;
      str.replace(a,b-a+1,str1);
    }
  }

  return 0;
}
