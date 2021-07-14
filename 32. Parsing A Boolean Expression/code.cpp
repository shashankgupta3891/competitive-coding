#include<bits/stdc++.h>
using namespace std;

bool parseBoolExpr(string expression) {

    stack<char>s;
    int tcount=0,fcount=0;
    for(char c:expression){
        if(c==',')
            continue;
        if(c==')'){
            tcount=0;fcount=0;
            while(s.top()!='('){
                char ch=s.top();
                s.pop();
                if(ch=='t')
                    tcount++;
                else if(ch=='f')
                    fcount++;
            }
        
            s.pop();
            if(!s.empty()){
                char op=s.top();
                s.pop();                        
                if(op=='!'){
                    s.push((tcount==0) ? 't' : 'f');  
                } else if(op=='&'){
                    if(fcount>0)
                        s.push('f');
                    else
                        s.push('t');
                } else if(op=='|'){
                    if(tcount>0)
                        s.push('t');
                    else
                        s.push('f');
                }
            }
        } else 
            s.push(c);
    }

    char sign=s.top();
    if(sign=='t')
        return 1;
    else
        return 0;
}



int main(){
    string expression = "&(f)";

    cout<<parseBoolExpr(expression);

    return 0;
}