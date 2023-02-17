#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	ofstream txtout("file11_2.txt");
	double values[] = {1.23, 35.36, 653.7, 4358.24};
	string names[] = {"Zoot", "Jimmy", "AI", "Stan"};
	for(int i = 0; i < 4; i ++)
		txtout << setw(6) << names[i] << setw(10) << values[i] << endl;
	return 0;
}
