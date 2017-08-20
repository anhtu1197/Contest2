#include <iostream>


using namespace std;

void cv(int dem, string &s) {
	string t = "";
	while(dem > 0) {
		char tmp = dem % 10 + '0'; 
		t += tmp;
		dem /= 10;
	}
	for (int i = t.length() - 1; i >= 0; i--) {
		s += t[i];
	}	
	
}



int check(char c) {
	if(c >= '0' && c <= '9')
		return 1;
	return 0;
}

main () {
	int n;
	cin >> n;
	while(n--) {
		string s, out = "";
		cin >> s;
//		cout << "Size = " << s.size();
		for (int i = 0; i < s.size() ; i++) {
			int dem = 0;
			for (int j = i; j < s.size(); j++) {
				if(s[j] == s[i] && s[j] != ' ')
					dem++;
				else
					break;
			
			}
			
//			cout << "Dem = " << dem << endl;
			
			if(dem >= 10) {
				cv(dem, out);
				out += s[i];
			}
			
			else {
				char tmp = dem + '0';
				out = out + tmp  + s[i];
			}
			i += dem - 1;
//			cout << "Size = " << s.size() << endl;
//			cout << "I = " << i << endl;
		}//fpr
		cout << out << endl;
	} // while
}
