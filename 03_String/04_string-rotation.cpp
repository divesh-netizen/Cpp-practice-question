// A Program to check if strings are rotations of each 
// other or not
#include<bits/stdc++.h>
using namespace std;

bool areRotations(string str1, string str2){
    /* Check if sizes of two strings are same */
    if (str1.length() != str2.length()) 
        return false; 
  
    string temp = str1 + str1;  
    return (temp.find(str2) != string::npos);
}


int main(){
    string str1 = "AACD", str2 = "ACDA";
    if(areRotations(str1, str2))
        printf("String are rotation of each other");
    else
        printf("String are not the rotation of each other");
    return 0;
}
