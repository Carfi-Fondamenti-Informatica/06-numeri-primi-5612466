#include <iostream>
#include "lib.h"
using namespace std; 

int main(){
  int k;
  cin >> k;
  if (numeroprimo(k)==0){
    cout << "numero primo" << endl;
  }
  else {
    cout << "numero non primo" << endl;
  }
  return 0;
}
