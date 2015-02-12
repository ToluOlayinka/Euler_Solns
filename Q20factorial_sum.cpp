#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
 


int main(int argc, char * argv[] ) {
	
	clock_t t;
	t = clock();
	string fvalue;
	char x;		
	double factorial = 1;
	int z=0;
	int i=1;
	while ( i<100)
{	
	factorial=factorial*i;
		i++;
	}
	
	fvalue = to_string(factorial); //  to compile in linux use-: g++ **-std=c++0x** filename.cpp -o filename

	for(int j=0; j<(int)fvalue.length(); j++){	
	
		x=fvalue[j];
		int y=atoi(&x);		
		z+=y;		// ASCII arithmetic 
		
		cout<<z<<endl;
				
}

	cout<<"\nFactorial: "<<setprecision(fvalue.length())<<factorial<<endl;
	cout<<"\nTotal Number of Digits: "<<fvalue.length()<<endl;	
	cout<<"\nSum: "<<z<<endl;
	
	
	t = clock() - t;
  	cout<<"\n\nProgram Runtime-:\n"<<"Clock ticks:"<<t<<" \nSeconds:  "<<((float)t)/CLOCKS_PER_SEC<< endl;
    return 0;

}
