#include <iostream>

using namespace std;

float avg(float sum, float n);

int main(int argc, char** argv) {
	
	int n;
	long sum;
	//get count of number
	cout << "How many numbers do you want to inter? ";
	cin >> n;
	//create array with lenght = n
	int numbers[n];
	
	for (int i = 0; i<n;i++){
		cout << "Inter #"<<(i+1)<<" number: ";
		cin >> numbers[i];
		sum += numbers[i];
	}
	
	float average = avg(sum, n);

	cout << "The average of number you have entered is: " << average;
	
	return 0;
}

float avg(float sum, float n){
	return sum/n;
}

