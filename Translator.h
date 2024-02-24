#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <iostream>
#include <string>
using namespace std;

class Translator{
    public:
        Translator();
        ~Translator();
        string translateEnglishWord(string englishWord);
        string translateEnglishSentence(string englishSentence);
        bool isVowel(char c);
  
        //Model *myModel
        //Translator:: { model = new model}
}
;

#endif