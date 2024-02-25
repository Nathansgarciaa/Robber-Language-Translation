#include "Translator.h"



Translator::Translator(){//constructor

}

Translator::~Translator(){//destructor

}
bool Translator::isVowel(char c) {//checks if letter is equal to upper and lower case AEIOU(vowels)
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

string Translator::translateEnglishWord(string englishWord) {//takes in word to translate for parameter
    string translatedWord;//make string for the translating so that can return in
    
    model = new Model();//create model object pointer to call its methods so i dont keep making new objects
    for (char letter : englishWord) {//for each loop iterates thru all letters in the word
        if (isVowel(letter)) {//if its a vowel is true, will call translateSingleVowel method
           translatedWord += model->translateSingleVowel(tolower(letter)); 
        } else if (!isVowel(letter) && isalpha(letter)) {//if its not a vowel but is an alphabetical letter, will call consonant method, isAlpha makes sure we dont treat punctuation stuff like consonants
            translatedWord += model->translateSingleConsonant(tolower(letter)); //adds to the word letter by letter
        } else {
            translatedWord += letter;//just adds the "letter" because its not alphabetical so it doesnt need tranalstion
        }
    }
    return translatedWord;
}
    
