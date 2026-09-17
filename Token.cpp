#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;

        cout << "Enter line " << i + 1 << ": ";
        getline(cin, s);

        string token = "";
        int count = 1;

        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == ' ')
            {
                cout << "Token " << count << " : " << token << endl;
                count++;
                token = "";
            }
            else
            {
                token += s[j];
            }
        }

        // Print the last token
        if (token != "")
        {
            cout << "Token " << count << " : " << token << endl;
        }

        cout << endl;
    }

    return 0;
}
