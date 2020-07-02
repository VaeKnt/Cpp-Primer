#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::endl; using std::vector; using std::string;

int main(){
 vector<int> v1;
 vector<int> v2(10);
 vector<int> v3(10, 42);
 vector<int> v4{10};
 vector<int> v5{10,42};
 vector<int> v6{10};
 vector<string> v7{10, "hi"}; 
 

 cout << "v1 " << endl;
 for (int i = 0; i < v1.size(); ++i){
  cout << v1[i] << endl;
 }
 
 cout << "v2 " << endl;
 for (int i = 0; i < v2.size(); ++i){
  cout << v2[i] << endl;
 }

 cout << "v3" << endl;
for (int i = 0; i < v3.size(); ++i){
 cout << v3[i] << endl;
}
 cout << "v4" << endl;
for (int i = 0; i < v4.size(); ++i){
 cout << v4[i] << endl;
}


 cout << "v5" << endl;
for (int i = 0; i < v5.size(); ++i){
 cout << v5[i] << endl;
}


 cout << "v6" << endl;
for (int i = 0; i < v6.size(); ++i){
 cout << v6[i] << endl;
}


 cout << "v7" << endl;
for (int i = 0; i < v7.size(); ++i){
 cout << v7[i] << endl;
}

 return 0;

}
