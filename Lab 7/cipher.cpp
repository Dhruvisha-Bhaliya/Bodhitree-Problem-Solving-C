#include <simplecpp>

char shiftUppercase(char ch, int shift);
char decodeChar(char ch, int shift);

main_program
{
    char t1, t2;
    cin >> t1 >> t2;
cout << shiftUppercase(t1, 5) << " " << shiftUppercase(t2, 5) << endl;

    cin.get();

    string line;
    getline(cin, line);

    for (char c : line)
    {
        for (int s = 0; s <= 35; s += 5)
        {
            cout << decodeChar(c, s) << " ";
        }
        cout << endl;
    }
}

char shiftUppercase(char ch, int shift)
{
    shift = shift % 26;
    int pos = ch - 'A';
    pos = (pos - shift + 26) % 26;
    return char('A' + pos);
}

char decodeChar(char ch, int shift)
{
    if (ch >= 'A' && ch <= 'Z')
        return shiftUppercase(ch, shift);
    else if (ch >= 'a' && ch <= 'z')
    {
        char upper = ch - 'a' + 'A';
        char decoded = shiftUppercase(upper, shift);
        return decoded - 'A' + 'a';
    }
    else
        return ch;
}
