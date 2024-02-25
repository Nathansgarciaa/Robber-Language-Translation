#include "FileProcessor.h"
#include "Model.h"
#include "Translator.h"
int main()  {
    //main method creates fileprocessor to call the processfile to make output file
    FileProcessor *h = new FileProcessor();
    h->processFile("input.txt", "output.html");
    return 0;
}