#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;
vi ms;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	ms = vi(n);
	for (auto&& x : ms) {
		cin >> x;
	}

	auto h = ms[0];
	auto ans = vi{};
	auto ct = int{ 0 };

	for (auto i = 1; i < n; ++i) {
		if (ms[i] < h) {
			++ct;
		}
		else {
			h = ms[i];
			ans.push_back(ct);
			ct = 0;
		}
	}
	ans.push_back(ct);

	cout << *max_element(ans.begin(), ans.end());

	return 0;
}