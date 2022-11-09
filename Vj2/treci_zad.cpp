#include <iostream>
#include <string>

using namespace std;


int findSubStr(string str, string substr)
{
    int found = 0;
    int index = 0;
    while ((index = str.find(substr, index)) != string :: npos) {

        found += 1;
        index += substr.length();
    }

    return found;
}

int main()
{
    string str = "neko negdje, mozda neko, neko nekad, neko nikad ";
    string substr = "neko";
  
    cout << "Substring se pojavljuje " << findSubStr(str,substr) << " puta" << endl;
    return 0;
}