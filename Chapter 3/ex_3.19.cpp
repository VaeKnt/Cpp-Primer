#include<vector>
using std::vector;

int main(){
 //3 ways to define a vector with 10 elements, all value 42

 //First
 vector<int> v1(10,42);

 //Second
 vector<int> v2{42,42,42,42,42,42,42,42,42,42};

 //Third
 vector<int> v3;
 for (int i = 1; i != 10; ++i){
  v3.push_back(i);
 }

 return 0;
}

  
