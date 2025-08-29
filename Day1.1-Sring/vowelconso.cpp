#include <iostream>
using namespace std;

int main()
{
    string s = "Hello Coder Army";

    int vowel = 0, consonant = 0;
    char ch;

    for (int i = 0; s[i] != '\0'; i++)
    {

        ch = s[i];

        if (ch == 'A' || ch == 'I' || ch == 'O' || ch == 'E' || ch == 'U' ||
            ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e')
        {
            vowel++;
            continue;
        }
        else if (ch == ' ')
        {
            continue;
        }
        else
        {
            consonant++;
        }
    }

    cout << "vowels are : " << vowel << " And consonants are: " << consonant << endl;
}