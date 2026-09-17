#include<bits/stdc++.h>
using namespace std;

int main(){
    string exp;
    cout<<"Enter expression: ";

    cin >> exp;

    stack<int> st;

    // Read prefix expression from right to left
    for(int i = exp.length() - 1; i >= 0; i--){
        char ch = exp[i];

        if(isdigit(ch)){
            st.push(ch - '0');
        }
        else{
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            int result;

            if(ch == '+'){
                result = a + b;
            }
            else if(ch == '-'){
                result = a - b;
            }
            else if(ch == '*'){
                result = a * b;
            }
            else if(ch == '/'){
                result = a / b;
            }

            st.push(result);
        }
    }

    cout << "Result: " << st.top();

    return 0;
}