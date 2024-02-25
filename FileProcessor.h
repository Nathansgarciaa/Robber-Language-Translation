#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <iostream>
#include <exception>
#include "Translator.h" 

using namespace std;
class FileProcessor{
    public:
        FileProcessor();//default
        ~FileProcessor();//destructor
        void processFile(string input_File, string output_File);//method
    private:
        Translator *translator;//create pointer to call methods
};
#endif