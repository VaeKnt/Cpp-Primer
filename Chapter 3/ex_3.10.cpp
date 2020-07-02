#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;

int main(){
 string s1,s2;
 getline(cin,s1);
 for (int i = 0; i < s1.size(); ++i){
  if (ispunct(s1[i])){
   }
  else{
   s2 += s1[i];
  }
 }
 cout << s2 << endl;
 return 0;
}

