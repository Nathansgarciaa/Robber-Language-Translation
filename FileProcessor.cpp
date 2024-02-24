#include "FileProcessor.h"
#include <fstream>
#include "Translator.h" 
//constructor
FileProcessor::FileProcessor() {
    
}

FileProcessor::~FileProcessor() {//destructor
   
}
//processFile takes in input file and translates to an output file
void FileProcessor::processFile(string input, string output) {
    ifstream fin(input);//opens input stream, taking in an input file and making it called fin
    string inputLine;//making a string to assign the text of input to 
    string outputLine;//making an output string that will go to the output file
    Translator translator;//created translator obect to call its methods
    if (!fin.is_open()) {
    cerr << "Failed to open input file." << endl;//checks if the file is even open
    return;
}
    while (getline(fin, inputLine)) {//getline gets the lines by lines from input and assigns to input line, iterating til lines are done
        outputLine += translator.translateEnglishWord(inputLine);//adds the translated input lines using this method to the output
    }
    fin.close();//have to close the input file



    ofstream fout(output);//creates an output file named to whatever the parameter is called for output
    if (!fout.is_open()) {
    cerr << "Failed to create output file." << endl;//makes sure its open and checks
    return;
}   //just outputing lines to match syntax of a html file
    fout << "<!DOCTYPE html>" << endl;
    fout << "<head>" << endl;
    fout << "</head>" << endl;
    fout << "<body>" << endl;
    fout << outputLine << endl;
    fout << "</body>" << endl;
    fout.close();//closes the output file


    
}
