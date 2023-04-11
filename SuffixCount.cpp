#include <iostream>
#include <string>
using namespace std;
int suffixCount(std::string S, int L) {
	int globalCount = 0;
	string subString;

	for (int i = 0; i < S.length(); i++) {
		//cout << S.at(i);
	}
	//cout << endl;
	for (int i = S.length() - L; i < S.length(); i++) {
		//cout << " here " <<i <<endl;
		//cout << S.at(i);
		subString.push_back(S.at(i));
		//put this into variable characters
	}
	string temp = S;
	for (int i = 0; i < S.length(); i++) {

		//  	cout << temp;
		size_t found = temp.find(subString);
		if (found != string::npos) {
			if (L != 1) {
				if (S.length() - L < i) {
					return globalCount;
				}
			}
			//cout << found;
			//	cout << found << endl;
			//string::pos = found;

			//i =found;
			globalCount++;
			temp = temp.empty();
			for (int j = found + 1; j < S.length(); j++) {
				temp.push_back(S.at(j));

			}

		} //use find function
	}
	
	return globalCount;
}
int main(){
	string S;
	int L = 0;
	cin >> S >> L;
	cout << suffixCount(S,L);
};