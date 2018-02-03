#include <iostream>

using namespace std;

int main(int ac, char *av[])
{
    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string line;

    while(getline(cin, line))
    {
        for (int i = 0; i < line.length(); i++)
            if (line[i] == ' ')
                cout << " ";
            else
                cout << keyboard[keyboard.find_first_of(line[i]) - 1];
        cout << endl;
    }

    return 0;
}
