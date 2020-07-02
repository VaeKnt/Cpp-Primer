#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;

int main(){
 string s("Hello World!");
 decltype(s.size()) i = 0;
 while (i < s.size()){
  if (isspace(s[i])){
  }
  else{
  s[i] = 'X';
  }
 ++i;
 }
 cout << s << endl;

 return 0;
}

