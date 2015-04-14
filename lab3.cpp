#include<iostream>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(){
	int number,total=0,lembu;
	vector<int> data;
	ifstream inFile("file.in",ios::in);
	inFile>>number;
	cout<<"you have"<<number<<" data\n"<<endl;
	while(inFile>>lembu){
		data.push_back(lembu);
	}
	sort(data.begin(),data.end());
	for(int i=3;i<number;i++){
		total = total + data[i];
	}
	cout<<"total="<<total<<"\n"<<endl;
//	cout<<data[0]<<data[1]<<data[2]<<data[3]<<data[4]<<data[5]<<data[6]<<data[7]<<endl;
	return 0;


}
