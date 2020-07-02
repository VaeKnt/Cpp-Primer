#include <iostream>
#include <string>
#include <vector>
using std::cout; using std::cin; using std::endl; using std::vector; using std::string;

int main(){
 string elem;
 vector<string> vec;

 while (cin >> elem){
  vec.push_back(elem);
 }
 return 0;
}

