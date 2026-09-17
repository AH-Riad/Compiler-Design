#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	
	cout<<"Enter a production: ";
	cin >>str;
	
	char left = str[0];
	
	int pos = str.find("->");
	
	bool found = false;
	
	for(int i = pos+2; i<str.length(); i++){
		if(str[i] ==left)
		{
			if(i == pos + 2 || str[i-1] == '|'){
				found = true;
				break;
			}
		}
		
	}
	if (found){
			cout << "Left recursive";
		}else{
			cout<< "Not left recursive";
		}
}
