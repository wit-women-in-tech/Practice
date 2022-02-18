#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    stack<int>st;
    for(int i=0;i<n;i++){
        if((s[i] != '+')&&(s[i] != '-')&&(s[i] != '*')&&(s[i] != '/')){
           st.push(s[i]-'0'); 
        }
        else{
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            if(s[i] == '+'){
                st.push(a+b);
            }
            else if(s[i] == '-'){
              st.push(b-a);  
            }
            else if(s[i] == '*'){
              st.push(b*a);  
            }
            else{
              st.push(b/a);  
            }
        }
    }
    cout<<st.top();
}
