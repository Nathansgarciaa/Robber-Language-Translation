#include "Model.h"
//empty constructors :)
Model::Model() {

}

Model::~Model() {

}
//translates consonants to double with o in between
string Model::translateSingleConsonant(char consonant) {
    string result;
    result += consonant;
    result += 'o';
    result += consonant;
    return result;
    }
//returns vowels because instructions said should do nothing to em
string Model::translateSingleVowel(char vowel) {
    string result;
    result += vowel;
    return result;
    }
    

