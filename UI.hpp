#pragma once
#include <vector>
#include <iostream>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix){
  for (int i = 0; i < matrix.size(); ++i) {
    for (int j = 0; j < matrix.at(0).size(); ++j) {
      cout << matrix.at(i).at(j) << " ";
    }
    cout << "\n";
  }
}
