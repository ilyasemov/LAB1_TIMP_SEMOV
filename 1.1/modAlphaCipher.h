#pragma once
#include <vector>
#include <string>
#include <map>
#include <locale>
using namespace std;
class modAlphaCipher
{
private:
 wstring numAlpha =L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
 map <char, int> alphaNum;
 vector <int>;
 int> convert>(const wstring& s); 
 convert(const vector<int>& v);
public:
    modAlphaCipher()=delete;
    modAlphaCipher(const wstring& skey);
 encrypt(const wstring& open_text);
 decrypt(const wstring& cipher_text);
};
