#include <iostream>
using namespace std;
#include <string>

class Histogram 
{
    string text;
public:
    Histogram(string text);
    void put(string text);
    void putc(char c);
    void print();
};

Histogram::Histogram(string text) 
{
    this->text = text;
    cout << text << endl;;
}

void Histogram::put(string text) 
{
    this->text += text;
    cout << text;
}

void Histogram::putc(char c) 
{
    text += c;
    cout << c;
}

void Histogram::print() 
{
    int num = 0;
    int alphabet[26] = { 0 };

    for (int i = 0; i < text.length(); ++i) 
    {
        if (isalpha(tolower(text[i])) != 0) 
        {
            ++num;
            alphabet[(int)(tolower(text[i]) - 97)]++;
        }
    }

    cout << endl << endl;
    cout << "ÃÑ ¾ËÆÄºª ¼ö " << num;
    cout << endl << endl;

    for (int i = 0; i < 26; ++i) 
    {
        char c = 'a' + i;
        cout << c << " (" << alphabet[i] << ")\t: ";

        for (int j = 0; j < alphabet[i]; ++j) 
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();
}