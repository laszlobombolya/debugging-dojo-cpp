#include <iostream>
using namespace std;

void fun(int i){
  fun(i);
  cout << i << endl;
}

int main(){
  int array[]{14, 3, 2};

  for (const auto & e: array) {
    fun(e);
  }
}