#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>q;
    q.push("ani");
    q.push("bni");
    q.push("cds");
    q.push("nda");
    q.push("css");
    q.push("html");
    q.push("js");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}