#include <iostream>
#include <fstream>
#include <string>
using namespace std;


#define FILE_PATH "/home/debian/VelazcoHW6-1"

int main(int argc, char* argv[]) {
 	 if (argc != 3) {
    		cout << " Usage is reading-file and name of file:createSomeThing.tx " << endl;
     		cout << " reading-file createSomeThing.txt" << endl;
    		return 2;
 	 }
  // Reading from  file created

 	 string cmd1(argv[1]);

 	 cout << " attempting to read file \n The Current FILE Path is: " << FILE_PATH << endl;
  	 cout << " What is the first file passed: " << cmd1 << endl;

 	 fstream fs1;
	 
	 string line;

 	 string path(FILE_PATH);

 	 string pathName1 = path+"/"+cmd1; // location that points to my directory
 	 cout  << " What is the First string pathName1 is: " << pathName1 << endl;


 	 string cmd2(argv[2]);
  	 cout << " What is the Second file passed: " << cmd2 << endl;

	 fstream fs2;

  	 string pathName2 = path+"/"+cmd2; // location that points to my directory
  	 cout  << " What is the Second  string pathName2 is: " << pathName2 << endl;
  
  	 cout << endl;

 	 //FILES OPENING 
  	 fs1.open((pathName1).c_str(), fstream::in);
  	 fs2.open((pathName2).c_str(), fstream::out);

  	 cout << " This is Reading file to createSomeThing.txt from its line to end and also writing to creatSomeThing2.txt..." << endl;

 	while(getline(fs1,line)){ //
		cout << line << endl;
		fs2 << line << endl;
 	}

	cout << " command done reading done and copying files" << endl;

	fs1.close();
	fs2.close();

}
