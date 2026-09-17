#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"Enter a string:";
	string str;
	getline(cin, str);

	
	if(str.length()>=2 && str.substr(0, 2)=="//"){
		cout<<"Single line comment";
	}
	
	else if(str.length()>=4 && str.substr(0, 2) == "/*" && str.substr(str.length()-2)=="*/"){
		cout<<"Multi line comment";
	}else cout<<"Not a comment";
	
}
