#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <string1> <string2>" << endl;
        return 1;
    }

    char* str1 = argv[1];
    char* str2 = argv[2];

    int count = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 0; i <= len2 - len1; ++i) {
        if (strncmp(str2 + i, str1, len1) == 0) {
            count++;
        }
    }

    cout << "Number of occurrences of \"" << str1 << "\" in \"" << str2 << "\": " << count << endl;

    return 0;
}

