#include<iostream>
#include "product.h"
#include <fstream>

string getText(string fileName) {
    fstream fin(fileName);
    string text;
    fin >> text;
    fclose(fin);
    return text;
}

void setText(string fileName, string text) {
    fstream fout(fileName);
    fout << text;
    fclose(fout);
}

void xorFile() {
    string fileName;
    cin >> fileName;
    text = getText(fileName);
    int xorVal;
    cin >> xorVal;
    for(size_t i = 0; i < strlen(text); i++) {
        text[i] = text[i] ^ xorval;
    }
    setText(fileName, text);
}

int main() {
    auto pr = Product("soup", 5);
    cout << pr.getName() << endl << pr.getCost();
}
