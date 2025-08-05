#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cout << "Enter a paragraph (end input with an empty line):\n";

    string line, paragraph;
    while (true) {
        getline(cin, line);
        if (line.empty()) break;
        paragraph += line + " ";
    }

    transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);

    for (char& c : paragraph) {
        if (ispunct(c)) {
            c = ' ';
        }
    }

    map<string, int> freq;
    string word;
    stringstream ss(paragraph);

    while (ss >> word) {
        freq[word]++;
    }

    cout << "\nWord frequencies:\n";
    for (const auto& p : freq) {
        cout << p.first << ": " << p.second << "\n";
    }

    return 0;
}
