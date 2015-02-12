#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;
 


int main() {
	string line;
	double sum;
	ifstream inf;
	inf.open("digits.txt");
	

  while(!inf.eof()) {
    inf >>line;
	sum= sum + stod(line);
	}// end-while
	cout<<setprecision(10)<<sum<<endl; // use setprecision to grab first 10 digits
    return 0;

}
