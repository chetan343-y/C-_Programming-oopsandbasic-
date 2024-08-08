#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

void printDuplicates(const string& str) {
    unordered_map<char, int> charCount;

    for (char c : str) {
        charCount[c]++;
    }

    bool foundDuplicates = false;
    for (auto& pair : charCount) {
        if (pair.second > 1) {
            cout << pair.first << " ";
            foundDuplicates = true;
        }
    }

    if (!foundDuplicates) {
        cout << "No duplicates found." << endl;
    } else {
        cout << endl;
    }
}

int main() {
    //Write a program to Print all the duplicates in the input string.

//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);

//     printDuplicates(str);

// //write a program to check whether a given character is contained in a string or not and find its position?
//         string str1;
//     char ch;

//     cout << "Enter a string: ";
//     getline(cin, str1);

//     cout << "Enter a character: ";
//     cin >> ch;

//     size_t pos = str1.find(ch);

//     if (pos != string::npos) {
//         cout << ch << " found at position " << pos << endl;
//     } else {
//         cout << ch << " not found in the string" << endl;
//     }

    //Write a program to count a number of vowels and consonants in a String?
    string str2;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str2);

    for (char ch : str2) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (isalpha(ch)) {
            consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
