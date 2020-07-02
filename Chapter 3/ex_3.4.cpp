#include <iostream> 
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;

int main(){
 string s1, s2;
 cin >> s1 >> s2;
 if (s1.size() != s2.size()){
  if (s1.size() > s2.size()){
   cout << "s1 is bigger " << s1 << endl;
  }
  else{
   cout << "s2 is bigger " << s2 << endl;
  }
 }
 else{
  cout << "s1 == s2 " << endl;
 return 0;
 }
}

