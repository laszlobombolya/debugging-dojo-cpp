#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> matrix{{1,2,3,4,5}, {10,11,13,14}, {4, 3, 2}};

  for (int i = 0; i < matrix.size(); ++i) {
    for (int j = 0; j < matrix.at(0).size(); ++j) {
      cout << matrix.at(i).at(j) << " ";
    }
    cout << "\n";
  }
  return 0;
}
