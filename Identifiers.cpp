#include<bits/stdc++.h>
using namespace std;

int main() {
    string name;

    cout << "Enter a variable name: ";
    cin >> name;

    // C++ keywords
    set<string> keywords = {
        "auto", "break", "case", "char", "const", "continue",
        "default", "do", "double", "else", "enum", "extern",
        "float", "for", "goto", "if", "int", "long",
        "register", "return", "short", "signed", "sizeof",
        "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while", "class",
        "private", "protected", "public", "friend", "inline",
        "virtual", "this", "new", "delete", "try", "catch",
        "throw", "bool", "true", "false", "namespace",
        "using", "template", "typename", "operator"
    };

    // Check whether it is a keyword
    if (keywords.count(name)) {
        cout << "Not a valid identifier." << endl;
        return 0;
    }

    // Check if first character is valid
    if (!(isalpha(name[0]) || name[0] == '_')) {
        cout << "Not a valid identifier." << endl;
        return 0;
    }

    // Check remaining characters
    for (int i = 1; i < name.length(); i++) {
        if (!(isalnum(name[i]) || name[i] == '_')) {
            cout << "Not a valid identifier." << endl;
            return 0;
        }
    }

    cout << "Valid identifier." << endl;

    return 0;
}
