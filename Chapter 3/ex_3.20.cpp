#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;

int main(){
 int i;
 vector<int> v;
 //Read into v
 while(cin >> i){
  v.push_back(i);
 }
 //Sum of adjacent elements
 for (int i = 0; i < v.size()-1; ++i){
  cout << v[i] << "+" << v[i+1] << "= " <<  v[i]+v[i+1] << endl;
 }

 // Sum of first and last, second and second last ...
 for (int i = 0; i < v.size()/2 ; ++i){
 cout << v[i] << "+" << v[v.size()-i-1] << "=" << v[i] + v[v.size()-1-i] << endl; 
 }

 return 0;
}

