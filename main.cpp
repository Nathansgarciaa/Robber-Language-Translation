#include "FileProcessor.h"
#include "Model.h"
#include "Translator.h"
int main()  {
    //main method creates fileprocessor to call the processfile to make output file
    FileProcessor h;
    h.processFile("input.txt", "file.html");
    
    return 0;
}