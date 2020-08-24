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
  
  string s; //getline(cin,s);

  int num, ans[1000]={0};
  while(cin >> s){
  RIP(i,s.size()) {
    if(islower(s[i]))
      ans[s[i]-'a']++;
    else if(isupper(s[i]))
      ans[s[i]-'a'+0x20]++;
  }
  }

  string o = "a";
  RIP(i,26){
    cout << o << " : " << ans[i] << endl;
    o[0] += 0x1;
  }

  return 0;
}
