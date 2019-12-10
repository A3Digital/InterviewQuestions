#include <iostream>

void generate(std::string& s, unsigned int pos) {
	if(pos == s.length())
		std::cout << s + " ";
	else if(s[pos] == '1' || s[pos] == '0')
		generate(s, pos+1);
	else {
		// We can assume that a '?' has been found
		s[pos] = '0';
		generate(s, pos+1);
		s[pos] = '1';
		generate(s, pos+1);
		s[pos] = '?';
	}
}

int main() {
	int cases;
	std::cin >> cases;
	while(cases) {
		std::string s;
		std::cin >> s;
		generate(s, 0);
		--cases;
		std::cout << std::endl;
	}
}