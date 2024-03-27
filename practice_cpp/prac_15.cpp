#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "¹®ÀÚ¿­À» ÀÔ·ÂÇÏ¼¼¿ä(ÇÑ±Û ¾ÈµÊ) " << endl;
	getline(cin, s, '\n'); // ¹®ÀÚ¿­ ÀÔ·Â
	int len = s.length(); // ¹®ÀÚ¿­ÀÇ ±æÀÌ
	char first;

	for (int i = 0; i < len; i++) 
	{

		first = char(s[0]);

		if ((first >= 'a' && first <= 'z') || (first >= 'A' && first <= 'Z'))
		{
			string first = s.substr(0, 1);
			string sub = s.substr(1, len - 1); 
			s = sub + first; 
			cout << s << endl;
		}

		else if (first >= '°¡' && first <= 'ÆR')
		{
			string first = s.substr(0, 2); 
			string sub = s.substr(2, len - 2); 
			s = sub + first; 
			cout << s << endl;
		}

		else if (s.substr(0, 1) == " ")
		{
			string first = s.substr(0, 1); 
			string sub = s.substr(1, len - 1); 
			s = sub + first; 
			cout << s << endl;
		}
	}
}

// ÇÑ±Û°ú ¿µ¾î ÇÔ²² ÀÔ·ÂÀ» ÇÏ¿© ÇÏ³ª¾¿ ¾ÕÀ¸·Î ÀÌµ¿½ÃÅ°±â 