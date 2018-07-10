#include<iostream>
using namespace std;

int main(){

  enum color { red, blue, green } c;
  int var;
  int tempVar;
  c = blue;
  tempVar = c;
  var = green;
  cout << var << endl;
  cout << tempVar << endl;


return 0;
}
