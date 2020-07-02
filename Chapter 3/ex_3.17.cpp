#include <iostream>
#include <string>
#include <vector>
using std::cout; using std::cin; using std::vector; using std::endl; using std::string;

int main(){
 string word;
 vector<string> vec;
 while (cin >> word){
  vec.push_back(word);
 }
 for (int i = 0; i < vec.size(); ++i){
  vec[i] = toupper(vec[i]);
 }

 return 0;
}

  
