#include<iostream>
#include<stdio.h>
using namespace std;
#include<string>
#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char, int> charCount;
        for(char c:s){
            charCount[c]++;
        }
        for(char c:t){
            charCount[c]--;
            if(charCount[c]<0){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    string s="carrace";
    string c="racecar";
    bool resutlt=s.isAnagram(s,c);
    cout<<resutlt;
}
