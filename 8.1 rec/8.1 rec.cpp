#include <iostream>
#include <cstring>
using namespace std;

int Count(char* str, int i = 0, int k = 0)
{
    if (str[i + 2] == 0)
        return k;
    if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c')
        return Count(str, i + 1, k + 1);
    return Count(str, i + 1, k);
}

void Change(char* str, char* tmp, int i = 0, int j = 0)
{
    if (str[i + 2] == 0)
    {
        tmp[j] = str[i];
        tmp[j + 1] = str[i + 1];
        tmp[j + 2] = '\0';
        return;
    }
    if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c')
    {
        tmp[j] = '*';
        tmp[j + 1] = '*';
        Change(str, tmp, i + 3, j + 2);
    }
    else
    {
        tmp[j] = str[i];
        Change(str, tmp, i + 1, j + 1);
    }
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "String contained " << Count(str) << " groups of 'abc'" << endl;
    char* dest = new char[151];
    Change(str, dest);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}