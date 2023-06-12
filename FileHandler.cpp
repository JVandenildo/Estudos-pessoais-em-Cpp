#include <iostream>
#include <fstream> // library for file handle
#include <string>
using namespace std;

int main(){
    fstream myFile;

    // myFile.open("testFile.txt", ios::out); // write mode
    // // receives 2 parameters: file's name, how to open that file, if the opened file does not exist it will be created
    // if(myFile.is_open()){
    //     myFile << "Hello.\n";
    //     myFile << "Second line.\n";

    //     myFile.close(); // a must after use a file
    // }
    // myFile.open("testFile.txt", ios::app); // write mode
    // // out overwrites the file, app appends new content
    // if(myFile.is_open()){
    //     myFile << "Hello 2!\n";
        
    //     myFile.close(); // a must after use a file
    // }

    myFile.open("testFile.txt", ios::in); // read mode
    if(myFile.is_open()){
        string line;
        while(getline(myFile, line)){
            cout << line << endl;
        }

        myFile.close();
    }

    return 0;
}