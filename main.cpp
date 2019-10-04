#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
		char id[11];
		char no[26]={10,11,12,13,14,15,16,17,0,18,19,20,21,22,0,23,24,25,26,27,28,29,32,30,31,33};
		int value[11];
		int y=0;
		cout << "Input Your TW-ID::";
		cin >> id;
		value[0]=(no[id[0]-65])/10;
		value[1]=(no[id[0]-65])%10;
		for (int i=1;i<=9;i++){
			value[i+1]=id[i]-48;
		}
		for (int i=1;i<10;i++){
			y = y+ value[i]*(10-i);
		}			
		y = y+ (value[0]+value[10]);
		//cout << "y=" << y << endl;
		if (y%10==0){
			cout << "True!!\n";
		} 
		else{
			cout << "False!!\n";
		} 
	return 0;
}
