#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of string: "<<endl;
	
	cin>>n;
	cin.ignore();
	
	for(int i  = 0; i<n; i++)
	{
		string s;
		int count = 1;
		cout<<"Enter string :" <<i+1 << endl;
		getline(cin, s);
		
		string token = "";

		6
		for(int j =0; j<s.length(); j++)
		{
			if(s[j] == ' ')
			{
				cout<<"Token :"<<count++ <<" "<<token<<endl;
				
				token = "";
			}else{
				token += s[j];
			}
		}
		if(token != ""){
				cout<<"Token :"<<count++ <<" "<<token<<endl;

		}
	}
}