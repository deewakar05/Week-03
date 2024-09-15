#include<iostream>
#include<string>
using namespace std;
int countCharacter(string &str, char ch){
    int n=str.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]==ch) count++;
    }
    return count;
}
int main(){
    string str1;
    getline(cin,str1);
    char ch;
    cin>>ch;
    int n=countCharacter(str1,ch);
    cout<<n;

}