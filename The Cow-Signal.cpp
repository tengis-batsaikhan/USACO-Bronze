#include <iostream>

using namespace std;

int main() {
	int i, j, h, n, m, l = 0, x, y;

	string str, str2;

	cin >> n >> x >> y;
	
	
	
	for(i = 0; i < x*y*n; i++){
		str2[i] = 'i';
	}
	
	


	while(l < x) {
		
		cin >> str;
		
		for(h = 0; h < str2.size(); h++) {
			for(j = 0; j < n; j++) {
				for(i = 0; i <= str.size(); i++) {
					for(m = 0; m < n; m++) {
//					cout << str[i];
						str2[h] = str[i];
					}
				}
				cout << endl;
			}

		}
		l++;
	}
	
	
	for(i = 0; i <= str2.size(); i++){
		cout << str2[i];
	}












	return 0;
}
