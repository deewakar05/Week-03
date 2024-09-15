#include<iostream>
#include<string>
using namespace std;
int stringLength(string &str){
    int n=str.length();
    return n;
}
int main(){
    string str1;
    getline(cin,str1);
    int n=stringLength(str1);
    cout<<n;

}