#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


void printHex(vector<unsigned char> vec)
{
    cout << std::hex << std::uppercase;

    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << static_cast<short>(vec[i]) << ' ';
    }

    cout << std::dec << std::nouppercase << endl;
}

vector<unsigned char> encryptGamming(const vector<unsigned char>& key, const string& pureText)
{
    if (key.size() != pureText.size())
    {
        cout << "Key length and text lenght are not the same!" << endl;
        return vector<unsigned char>('0');
    }

    vector<unsigned char> encryptedText(key.size());

    for (size_t i = 0; i < key.size(); i++)
    {
        encryptedText[i] = pureText[i] ^ key[i];
    }

    return encryptedText;
}

string decryptGamming(const vector<unsigned char>& key, vector<unsigned char>& encryptText)
{
    if (key.size() != encryptText.size())
    {
        cout << "Key length and encrypt text lenght are not the same!" << endl;
        return "0";
    }

    string decryptedText(key.size(), '0');

    for (size_t i = 0; i < key.size(); i++)
    {
        decryptedText[i] = encryptText[i] ^ key[i];
    }

    return decryptedText;
}

vector<unsigned char> findKey(vector<unsigned char>& encryptText, const string& pureText)
{
    if (encryptText.size() != pureText.size())
    {
        cout << "Pure text length and encrypt text lenght are not the same!" << endl;
        return vector<unsigned char>('0');
    }

    vector<unsigned char> key(encryptText.size());

    for (size_t i = 0; i < encryptText.size(); i++)
    {
        key[i] = encryptText[i] ^ pureText[i];
    }

    return key;
}


int main()
{
    std::setlocale(LC_ALL, "ru");

    vector<unsigned char> exampleKey = {
        0x05, 0x0C, 0x17, 0x7F, 0x0E, 0x4E, 0x37, 0xD2, 0x94, 0x10,
        0x09, 0x2E, 0x22, 0x57, 0xFF, 0xC8, 0x0B, 0xB2, 0x70, 0x54
    };

    string examplePureText("Штирлиц – Вы Герой!!");

    cout << "Example key:" << endl;
    printHex(exampleKey);
    cout << "\nExample decrypted message:\n" << examplePureText << endl;


    vector<unsigned char> encryptedMessage = encryptGamming(exampleKey, examplePureText);
    cout << "\nCalculated encrypted message:" << endl;
    printHex(encryptedMessage);

    cout << "\nCalculated decrypted message:" << endl;
    cout << decryptGamming(exampleKey, encryptedMessage) << endl << endl;;

    vector<unsigned char> wrongKey = {
        0x05, 0x0C, 0x17, 0x7F, 0x0E, 0x4E, 0x37, 0xD2, 0x94, 0x10,
        0x09, 0x2E, 0x22, 0x55, 0xF4, 0xD3, 0x07, 0xBB, 0xBC, 0x54
    };

    cout << "\nWrong key:" << endl;
    printHex(wrongKey);
    cout << "\nDecrypted message from wrong key:\n" << decryptGamming(wrongKey, encryptedMessage) << endl << endl;

    string wonderedText("Я очень люблю C++!!!");
    cout << "\nWondered message:\n" << wonderedText << endl;

    vector<unsigned char> predictedKey = findKey(encryptedMessage, wonderedText);
    cout << "\nPredicted key for wondered message:" << endl;
    printHex(predictedKey);

    string calculatedWonderedText = decryptGamming(predictedKey, encryptedMessage);
    cout << "\nDecrypted message from this key:\n" << calculatedWonderedText << endl;

    string taskMessage("С Новым Годом,друзья");
    cout << "\nKey for message '" << taskMessage << "': " << endl;
    printHex(findKey(encryptedMessage, taskMessage));


    return EXIT_SUCCESS;
}