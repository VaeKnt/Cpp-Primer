#include <iostream>

int main(){
 int sum = 0;
 int a,b;
 std::cout << "Enter lower and upper boundary: " << std::endl;
 std::cin >> a >> b;
 for (int i=a; i<=b; ++i) 
  std::cout << i << std::endl;
 return 0;
}

