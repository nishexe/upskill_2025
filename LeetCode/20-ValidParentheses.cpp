#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<char> st;
    for(auto &ch : s){
        if(!st.size()) st.push(ch);
        else{
            auto top = st.top();
            if(top == '(' && ch == ')') st.pop();
            else if(top == '{' && ch == '}') st.pop();
            else if(top == '[' && ch == ']') st.pop();
            else st.push(ch);
        }
    }return st.empty();
}
int main(){
    string s = "())";
    cout<<isValid(s);
    return 0;
}