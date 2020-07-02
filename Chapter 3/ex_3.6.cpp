#include <iostream>
#include <string>
using std::cout; using std::endl; using std::cin; using std::string;

int main(){
 string s("Hello World!");
 //Change all non-blank characters to Xs

 for (char &c:s){
  if (!isspace(c)){
   c = 'X'; 
   }
  }
 
 cout << s << endl;
 return 0;
}

