#include<iostream>
#include<string>
using namespace std;
string concatenateStrings(string &str1,string &str2){
    string str=str1+str2;
    return str;
}
int main(){
    string str1;
    getline(cin,str1);
    string str2;
    getline(cin,str2);
    cout<<concatenateStrings(str1,str2);
}