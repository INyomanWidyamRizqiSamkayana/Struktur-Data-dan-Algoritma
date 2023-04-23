#include <iostream>

using namespace std;

int main(){
	for(int x=1;x<10;x++) {
  if(x == 2) {
    continue; 
  }
  if(x == 5) {
    break;
  }
  cout << x << endl;
}
}