#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	string divide[4] = { "dream","dreamer","erase","eraser" };
	reverse(s.begin(), s.end());
	int i,j;
	for (i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());

	bool can1 = true;
	for (i = 0; i < s.size();) {
		bool can2 = false;
		for (j = 0; j < 4; j++) {
			string d = divide[j];
			if (s.substr(i, d.size()) == d) {
				can2 = true;
				i += d.size();
			}
		}
		if (!can2) {
			can1 = false;
			break;
		}
	}
	if (can1)cout << "YES" << endl;
	else cout << "NO" << endl;
}
