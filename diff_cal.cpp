#include<bits/stdc++.h>
using namespace std;

long long term(string polyterm, long long val) {
   string coeffStr = "";
   int i;
   for (i = 0; polyterm[i] != 'x'; i++){
      coeffStr.push_back(polyterm[i]);
   }
   long long coeff = atol(coeffStr.c_str());
   string powStr = "";
   for (i = i + 2; i != polyterm.size(); i++){
      powStr.push_back(polyterm[i]);
   }
   long long power = atol(powStr.c_str());
   cout<<coeff * power * pow(val, power - 1)<<endl;
   return coeff * power * pow(val, power - 1);
}

long long value(string& str, int val) {
   long long ans = 0;
   string polyterm;
   istringstream is(str);
   while (is >> polyterm){
      if (polyterm == "+"){
         continue;
      }
      else{
         ans = (ans + term(polyterm, val));
      }
   }
   return ans;
}
int main() {
   string str;
   fflush(stdin);
   getline(cin,str);
   int val ;
   cin>>val;
   cout << value(str, val);
   return 0;
}

