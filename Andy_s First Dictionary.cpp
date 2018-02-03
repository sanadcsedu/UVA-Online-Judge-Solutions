#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    char input[1000], temp[1000];
    vector <string> v;
    int i, j, len;

    while (cin.getline(input, sizeof(input)))
    {
        j = 0;
        len = strlen(input);

        for (i = 0; i <= len; ++i)
        {
            if (isalpha(input[i]))
                temp[j++] = tolower(input[i]);

            else
            {
                temp[j] = '\0';
                j = 0;
                if (strlen(temp) == 0)
                continue;

                string sss(temp);
                v.push_back(sss);
            }
        }
    }
        sort (v.begin(), v.end());
        len = v.size();
        cout << v[0] << endl;
        for (int i = 1; i < len; ++i){
            if (v[i] == v[i-1]) continue;
        cout << v[i] << endl;
    }
    return 0;
}
