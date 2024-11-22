#include<stdio.h>
#include <iostream>
#include<string>
using namespace std;
int main(){
    string t="hello";
    for(char c : t){
        cout<<c << "  ";
    }
}