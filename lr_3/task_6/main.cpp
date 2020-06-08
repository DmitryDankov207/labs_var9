#include<iostream>
#include "product.h"
#include <fstream>

string getText(string fileName) {
    fstream fin(fileName);
    string text;
    fin >> text;
    fin.close();
    return text;
}

void setText(string fileName, string text) {
    fstream fout(fileName);
    fout << text;
    fout.close();
}

void xorFile() {
    string fileName;
    cin >> fileName;
    string text = getText(fileName);
    int xorVal;
    cin >> xorVal;
    for(size_t i = 0; i < text.length(); i++) {
        text[i] = text[i] ^ xorVal;
    }
    setText(fileName, text);
}

int main() {
    xorFile();
    auto pr = Product("soup", 5);
    cout << pr.getName() << endl << pr.getCost();
}
