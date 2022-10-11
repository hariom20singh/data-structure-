#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int frq[26]={0};
    int index=0;
    for(int i=0;i<s.size();i++)
    {int index=s[i]-'a';
    frq[index]++;}
    
    int maxi=-1;
    int ans=0;
    for(int i=0;i<25;i++){
        if(maxi<frq[i])
        {ans=i;
        maxi=frq[i];}
    }
    char finalans=ans+'a';
    cout<<finalans;
}