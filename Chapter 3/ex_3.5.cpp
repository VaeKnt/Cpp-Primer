#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;

int main(){
 string s1, temp;
 cin >> s1;
 while (cin >> temp){
  s1 +=  " " + temp;
 }
 cout << s1 << endl;
 return 0;
}

