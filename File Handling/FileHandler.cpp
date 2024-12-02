#include <iostream>
#include <fstream> // library for file handle
#include <string>

// int main()
// {
//     std::fstream myFile;

//     myFile.open("testFile.txt", std::ios::out); // write mode
//     // receives 2 parameters: file's name, how to open that file, if the opened file does not exist it will be created

//     if (myFile.is_open())
//     {
//         myFile << "Hello.\n";
//         myFile << "Second line.\n";

//         myFile.close(); // a must after use a file
//     }

//     // myFile.open("testFile.txt", std::ios::app); // write mode
//     // // out overwrites the file, app appends new content

//     // if (myFile.is_open())
//     // {
//     //     myFile << "Hello 2!\n";

//     //     myFile.close(); // a must after use a file
//     // }

//     // myFile.open("testFile.txt", std::ios::in); // read mode
//     // if (myFile.is_open())
//     // {
//     //     std::string line;
//     //     while (getline(myFile, line))
//     //     {
//     //         std::cout << line << std::endl;
//     //     }

//     //     myFile.close();
//     // }

//     return 0;
// }