#include "file.h"
using namespace std;
list<string> file::read(string filepath,string filename) {
    string line;
    list<string> value;
	ifstream file(filepath+filename);
	if (file.is_open()) {
		while (getline(file,line)) {
            value.push_back(line);
		}
		file.close();
	} else {
		cout << "Unable to open file" << endl;
        value.push_back("Unable to open file");
	}
    return value;
}
void file::write(string filepath,string filename,list<string> value) {
	ofstream file(filepath+filename);
	if (file.is_open()) {
        list<string>::iterator line = value.begin(); 
        for (line=value.begin();line!=value.end();line++) {
            file << *line << endl;
        }
		file.close();
	} else {
		cout << "write error" << endl;
	}
}