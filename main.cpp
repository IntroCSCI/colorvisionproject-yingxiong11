//Author: PUT YOUR NAME HERE
#include <iostream> 
#include <fstream> 
#include <string.h> 


using namespace std;

int main()
{ 
  string filename = "MYCSS.CSS"; 
  fstream reader;
  string line; 
  string basecolor;  
  char delimiter = '.'; 
  char delimiter2= ':';
  //get user input...
  cout << "Please enter base color:\n";
  cin >> basecolor; 
  //try to open the file...
  reader.open(filename, ios::in ); 
  if(reader.is_open()) { 
    while(!reader.eof()){ 
      getline(reader,line); 
      int period = (unsigned)line.find(delimiter);
      if(period >= 0){
        string token = (line.substr(period+1));
        if(basecolor.compare("red") == 0){
          if(token.compare("green") != 0 && token.compare("red") !=0 ){
            getline(reader, line); 
            getline(reader, line); 
            int colon = (unsigned)line.find(delimiter2);
            token = line.substr(colon+1);
            cout << basecolor + "+" +  token << endl;
          }
        } else if(basecolor.compare("green") == 0){
          if(token.compare("red") != 0 && token.compare("green") !=0 ){
            getline(reader, line); 
            getline(reader, line); 
            int colon = (unsigned)line.find(delimiter2);
            token = line.substr(colon+1);
            cout << basecolor + "+" +  token << endl;
          }
        } else if(basecolor.compare("blue") == 0){
          if(token.compare("yellow") != 0 && token.compare("blue") !=0 ){
            getline(reader, line); 
            getline(reader, line); 
            int colon = (unsigned)line.find(delimiter2);
            token = line.substr(colon+1);
            cout << basecolor + "+" +  token << endl;
          }
        } else if(basecolor.compare("yellow") == 0){
          if(token.compare("blue") != 0 && token.compare("yellow") !=0 ){
            getline(reader, line); 
            getline(reader, line); 
            int colon = (unsigned)line.find(delimiter2);
            token = line.substr(colon+1);
            cout << basecolor + "+" +  token << endl;
          }
        }
      }
    } 
  }
  else{
      cout << "Could not open " << filename << endl;
  }
 //display an error if it doesn't open, or display the file's contents if it does
  return 0;
}
