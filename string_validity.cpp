#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cout<<"Enter a string:";
	getline(cin, str);
	bool valid = true;
	
	for(int i=0; i<str.length(); i++){
		if(isalpha(str[0]) || isdigit(str[0])|| str[0] ==' '){
			continue;	
		}else{
			valid == false;
			break; 
	}}
	
	if(valid)
	cout<<"valid string";
	
	else cout<< "Invalid string";
}
