// Print all subsequences of a string
#include<bits/stdc++.h>
using namespace std;

void printSubsequence(string input, string output){
    // if the input is empty print the output string 
    if(input.empty())
        cout<<output<<endl;
        return;
    // output is passed with including the 1st character of input string
    printSubsequence(input.substr(1), output+input[0]);

    // output is passed without including the 1st character of the input string
    printSubsequence(input.substr(1), output);
}

int main(){
    string output = "";
    string input = "abcd";
    printSubsequence(input, output);
    return 0;
}