#include <iostream>     
#include <fstream>  
#include <string>       
#include <sstream>      
#include <vector>

using namespace std;

int main() {

ifstream inputFile("tekst.txt"); 
ofstream outputFile("tekst1.txt");

if (inputFile.is_open() && outputFile.is_open()) {  // podwojny operator!!
   
string line;

vector<string> lines;

while (getline(inputFile, line)) {
    lines.push_back(line);
}

for (int i = 0; i < lines.size(); i++) {
            for (int j = 0; j < lines[i].size(); j++) {
                if (j == 0 || isspace(lines[i][j-1])) {
                    lines[i][j] = toupper(lines[i][j]);
                }
            }
            outputFile << lines[i] << endl;
}

inputFile.close();
outputFile.close();

}
}
