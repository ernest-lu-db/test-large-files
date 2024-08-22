#include <iostream>
#include <fstream>

using namespace std;
constexpr int n = 15000;

int main() { 
  cin.tie(0)->sync_with_stdio(false);

  for (int i = 0; i < n; i++) {
    ofstream fout("file_" + to_string(i) + ".txt");
    fout << "test output\n";
  }

  return 0;
}
