#include <vector>
#include "Reader.hpp"
#include "UI.hpp"
#include "Logic.hpp"

using namespace std;
// TODO:
//  What kind of error did you found ?
//  What caused it ?
//  Where did you found it ?

int main() {
  vector<vector<int>> matrix = getInputs();
  printMatrix(matrix);
  duplicate(matrix);
  printMatrix(matrix);
  return 0;
}
