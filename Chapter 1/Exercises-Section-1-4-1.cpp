#include <iostream>

int main(){
 int a,b= 0;
 std::cout << "Enter left boundary: " << std::endl;
 std::cin >> a;
 std::cout << "Enter right boundary: " << std::endl;
 std:: cin >> b;
 while (a <= b){ 
  std::cout << a << std::endl;
  ++a;
 }
 return 0;
}

