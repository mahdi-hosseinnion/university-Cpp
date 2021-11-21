#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n, min, x;
	
	cout << "How many number do you want to enter? ";
	cin >> n;
	
	//if n(count of numbers) is 0 or less then 0 (negative) we don't want to do anything
	if(n<1){
		
		//do nothing
	}else{
		
		//get first number and set minimum to that number
		cout << "Please enter your number #1: ";
		cin >> min;
		n--;
		
		//a simple counter to show users which number they are entering
		int i = 2;

		while(n>0){
			cout << "Please enter your number #"<< i << ": ";
			cin >> x;
			
			if(x < min){
				min = x;
			}
			
			i++;
			n--;
		
		}
	
		cout << "The minimum of numbers you have entered is: " << min << endl;
	}	
	cout << "Finish";
	
	return 0;
}
