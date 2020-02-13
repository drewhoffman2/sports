#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <functional>
using namespace std;

int main(){
  string a = "zubaciv01";
  hash<string> hashc;
  int code = hashc(a);
  cout << code << endl;
}
