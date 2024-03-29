#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::string;
using std::cin;	using std::sort;
using std::endl; using std::streamsize;
using std::vector;

int main()
{
    vector<string> words;
    string s;
    while (cin >> s)
    {
        if (s == "finish")
        {
            break;
        }
        words.push_back(s);
    }

    sort(words.begin(), words.end());
    string temp = words[0];
    int cnt = 1;
    for (int i = 1; i < words.size(); i++)
    {
        if (words[i] == temp)
        {
            cnt++;
            continue;
        }
        cout << temp << " : " << cnt << endl;
        temp = words[i];
        cnt = 1;
    }
    cout << temp << " : " << cnt << endl;
    return 0;
}