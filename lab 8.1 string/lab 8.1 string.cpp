#include <iostream>
#include <string>

using namespace std;

int Count(const string& s) {
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find(s[pos], pos)) != -1) {
        if (s[pos] == s[pos + 1] && s[pos] == s[pos + 2] && s[pos] == s[pos + 3]) {
            k++;
            pos += 4;
        }
        else
            pos++;
    }
    return k;
}

string Change(string& s)
{
    size_t pos = 0;
    while (pos < s.length() - 3)
    {
        if (s[pos] == s[pos + 1] && s[pos] == s[pos + 2] && s[pos] == s[pos + 3]) {
            s.replace(pos, 4, "**");
            pos += 2;
        }
        else
            pos++;
    }
    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of four identical characters" << endl;
    cout << "Modified string (param) : " << str << endl;

    string dest = Change(str);
    cout << "Modified string (result): " << dest << endl;

    return 0;
}

