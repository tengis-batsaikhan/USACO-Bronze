#include <iostream>

using namespace std;

int main() {
	int i, j, n, m, l = 0, x;

	string str;

	cin >> n >> x;

	while(l < x) {
		
		cin >> str;
		
		for(j = 0; j < n; j++) {
			for(i = 0; i <= str.size(); i++) {
				for(m = 0; m < n; m++) {
					cout << str[i];
				}
			}
			cout << endl;
		}
		l++;
	}







	return 0;
}

