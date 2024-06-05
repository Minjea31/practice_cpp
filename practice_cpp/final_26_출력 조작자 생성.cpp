#include <iostream>
using namespace std;

ostream& fivestar(ostream& outs)
{
	return outs << "*****";
}

ostream& rightarrow(ostream& outs)
{
	return outs << "----->";
}

int main()
{
	cout << "C" << rightarrow << "C++" << rightarrow << "java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
}