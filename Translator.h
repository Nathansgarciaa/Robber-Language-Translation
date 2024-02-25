#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <iostream>
#include <string>
using namespace std;

class Translator{
    public:
        Translator();//construcor
        ~Translator();//destrucotr
        //methods
        string translateEnglishWord(string englishWord);
        string translateEnglishSentence(string englishSentence);
        //created isVowel to just make a boolean(true or false) checking if letter is a vowel or not
        bool isVowel(char c);
  
}
;

#endif