#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	double array[10], total = 0, min, max = 0,ave;
	for(int i = 0; i < 10; i++){
		cout <<"Enter Integer " << i+1 << " : ";
		cin >> array[i];
	}
	
	for(int i = 0; i < 10; i++){
		if(max < array[i]){
			max = array[i];
		}
	}
	
	min = max;
	for(int i = 0; i < 10; i++){
		if(min  > array[i]){
			min = array[i];
		}
	}
	
	for(int i = 0; i < 10; i++){
		total += array[i];
	}
	
	ave = total / 10;
	
	cout << endl;
	
	cout << "Smallest Integer : " << min << endl;
	cout << "Largest Integer : " << max << endl;
	cout << "Total : " << total << endl;
	cout << "Average : " << ave << endl;
	
	_getch();

	return 0;
}
