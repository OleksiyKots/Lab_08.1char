#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int CountStarsUsingC(char* str) {
    int count = 0, pos = 0;
    while (char* t = strstr(str + pos, "***")) {
        count++;
        pos = (t - str) + 1;
    }
    return count;
}

char* ReplaceStarsUsingC(char* str) {
    char* result = new char[strlen(str) + 1];
    char* p;
    int pos1 = 0, pos2 = 0;
    result[0] = '\0';
    while ((p = strstr(str + pos1, "***"))) {
        pos2 = p - str + 3;
        strncat(result, str + pos1, pos2 - pos1 - 3);
        strcat(result, "!!");
        pos1 = pos2;
    }
    strcat(result, str + pos1);
    strcpy(str, result);
    return result;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "String contains " << CountStarsUsingC(str) << " groups of '***'" << endl;
    char* result = ReplaceStarsUsingC(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << result << endl;
    delete[] result;
    return 0;
}
