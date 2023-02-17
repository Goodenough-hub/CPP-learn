#include<fstream>
using namespace std;

int main(){
	ofstream txtout("file11_1.text");
	double values[] = {1.23, 35.36, 653.7, 4358.24};
	for(int i = 0; i < 4; i ++){
		txtout.width(10);
		txtout << values[i] << endl;
	}
	txtout.close();
	return 0;
}
