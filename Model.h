#ifndef MODEL_H
#define MODEL_H
#include <iostream>
#include <string>
using namespace std;
class Model{
    public:
        Model();//default
        ~Model();//destructor
        //methods
        string translateSingleConsonant(char consonant);
        string translateSingleVowel(char vowel);
};
#endif