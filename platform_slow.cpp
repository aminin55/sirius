/*
https://pro-prof.com/forums/topic/acmp_29

*/

#include <iostream>
#include <vector>

using namespace std;

int min_energy(const vector<int>& platforms, size_t pos) {
  if (pos == 0)
    return 0;
  auto simple_step = abs(platforms[pos] - platforms[pos-1]) + min_energy(platforms, pos-1);
  if (pos == 1)
    return simple_step;
  auto super_step = abs(platforms[pos] - platforms[pos-2])*3 + min_energy(platforms, pos-2);
  return min(simple_step, super_step);
}
int main() {
  size_t n;
  cin >> n;
  vector<int> plantforms(n);
  for (size_t i = 0; i < n; ++i)
    cin >> plantforms[i];
   cout << min_energy(plantforms, plantforms.size()-1);
}
