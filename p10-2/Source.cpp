#include <iostream>
#include <string>
using namespace std;
int count_words(string str);

int main() {
	int spaces;
	string quote;
	getline(cin, quote);
	spaces = count_words(quote);
	cout << "Spaces in quote: " << spaces;

}

int count_words(string str) {
	int characters = str.length();
	int space = 1;
	for (int i = 0; i < characters; i++) {
		str.substr(i, 1);
		if (str.substr(i, 1) == " " && str.substr(i - 1, 1) != " ") {
			space++;
		}
	}
	return space;
}