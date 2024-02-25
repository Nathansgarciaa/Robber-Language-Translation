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
    string originalText; //putting original input to file
    string outputTranslation;//making an output string translated that will go to the output file
    Translator translator;//created translator obect to call its methods
    if (!fin.is_open()) {
    cerr << "Failed to open input file." << endl;//checks if the file is even open
    return;
}
    while (getline(fin, inputLine)) {//getline gets the lines by lines from input and assigns to input line, iterating til lines are done
        originalText += inputLine;
        outputTranslation += translator.translateEnglishWord(inputLine);//adds the translated input lines using this method to the output
    }
    fin.close();//have to close the input file

    ofstream fout(output);//creates an output file named to whatever the parameter is called for output
    if (!fout.is_open()) {
    cerr << "Failed to create output file." << endl;//makes sure its open and checks
    return;
    }   
    fout << "<!DOCTYPE html>" << endl;
    fout << "<html lang=\"en\">" << endl;
    fout << "<h1> Lebron's The Decision in Robber Language </h1>" << endl;
    fout << "<body>" << endl;
    fout << "<strong>" << originalText << "</strong>" << endl;//strong created bold og text
    fout << "<p>" << outputTranslation << "</p>" << endl;
    fout << "</body>" << endl;
    fout << "</html>";
    fout.close(); // Closes the output file


    
}
