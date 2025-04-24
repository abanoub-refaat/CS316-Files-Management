#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    fstream file;
    file.open("Text.txt", ios::in | ios::out | ios::binary);
    string target = "HelloHazem";
    string replace = "replace";
    int i = 0;
    char c;
    while (file >> c)
    {
        if (c == target[i])
        {
            int f = file.tellg();
            int cnt = 1;
            for (int j = 1; j < target.length(); ++j)
            {
                file >> c;
                if (c == target[j])
                    cnt++;
            }
            if (cnt == target.length())
            {
                file.seekg(f - 1);
                for (int o = 0; o < target.length(); ++o)
                {
                    if (o < replace.length())
                        file.put(replace[o]);
                    else
                        file.put(' ');
                }
                file.close();
                exit(0);
            }
        }
    }
    cout << "false" << endl;
    file.close();
    return 0;
}
