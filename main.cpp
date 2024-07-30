#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll a, b, c, d, e;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> a >> b >> c >> d >> e;
  auto ans = ll{0};
  if (a - b <= 1000) {
    ++ans;
  }
  if (a - c <= 1000) {
    ++ans;
  }
  if (a - d <= 1000) {
    ++ans;
  }
  if (a - e <= 1000) {
    ++ans;
  }
  cout << ans;

  return 0;
}