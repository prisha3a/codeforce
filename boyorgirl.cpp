#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    cin >> username;
    bool char_present[26] = {false};
    int dc = 0;
    for (int i=0;i<username.length();i++)
    {
        char c=username[i];
        
        int index=c-'a';
        if (!char_present[index])
        {
            char_present[index] = true;
            dc++;
        }
    }
    if (dc % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
