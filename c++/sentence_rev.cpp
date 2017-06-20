#include <iostream>
using namespace std;

int main() {
    char sentence[] = ("my name is anu");
    cout << sentence << endl;

    int len = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        len++;
    }
    //cout << len << endl;

    char reverse[len];
    int k = 0;

    for (int j = len - 1; j >= 0; j--) {
        reverse[k] = sentence[j];
        k++;
    }

    //cout << reverse << endl;

    int words = 0;
    char str[len];

    // change here added last_l to track the end of the last word reversed, moved
    // the check of the end condition to the end of loop body for handling the \0
    // case
    for (int l = 0, last_l = 0; ; l++) {
        if (reverse[l] == ' ' || reverse[l] == '\0')
        {
            for (int m = l - 1; m >= last_l; m--) { // change here, using last_t to
                str[words] = reverse[m];            // only reverse the last word
                words++;                            // without the split character
            }
            last_l = l + 1;                         // update the end of the last
                                                    // word reversed
            str[words] = reverse[l];                // copy the split character
            words++;
        }
        if (reverse[l] == '\0')                     // break the loop
            break;
    }

    cout << str << endl;

    return 0;
}
