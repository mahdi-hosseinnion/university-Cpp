#include <iostream>

using namespace std;

float avg(float x, float y, float z);

int main(int argc, char** argv) {
	
	float a, b, c;
	
	cout << "Inter 3 number: ";
	
	cin >> a >> b >>c ;
	
	cout << "The avrage of numbers is: " << avg(a, b, c);

}

float avg(float x, float y, float z){
	return (x + y + z) / 3;
}

