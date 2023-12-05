#include <iostream>
#include <string>

using std::cout;
using std::string;

const string &longer(const string &a, const string &b)
{
    if (a.size() > b.size())
        return a;
    return b;
}

int main()
{
    string a{"abc"};
    string *bp;
    {
        string b{"helloworld"};
        bp = &b;
    }
    string c{"ccccc"};
    cout << longer(a, *bp);
    return 0;
}