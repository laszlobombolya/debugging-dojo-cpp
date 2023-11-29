#include <vector>
#include "Reader.hpp"
#include "UI.hpp"
#include "Logic.hpp"

using namespace std;

int main() {
  vector<vector<int>> matrix = getInputs();
  printMatrix(matrix);
  duplicate(matrix);
  printMatrix(matrix);
  return 0;
}
