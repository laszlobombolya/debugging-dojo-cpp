#pragma once
#include <vector>

using namespace std;

int twice(int number){
  return number *  2;
}

void duplicate(vector<vector<int>> matrix){
  for (int i = 0; i < matrix.size(); ++i) {
    for (int j = 0; j < matrix.at(0).size(); ++j) {
      matrix[i][j] = twice(matrix.at(0).at(j));
    }
  }
}