#include <iostream>
using namespace std;
void rotateClockwise(string &s){
    int n=s.length();
    if(n<2)
    return;

    char last=s[n - 1];

    int index=n - 1;
    while(index >0){
        s[index]=s[index - 1];
        index--;
    }

    s[0] =last;
}

void rotateAntiClockwise(string &s){
    int n = s.length();
    if(n<2) 
    return;

    char first =s[0];

    int index =0;
    while (index <n -1){
        s[index]= s[index + 1];
        index++;
    }

    s[n - 1]=first;
}

int isRotated(string str1, string str2){

    if (str1.length() != str2.length())
        return 0;

    string clockwise =str1;
    string anticlockwise= str1;

    rotateClockwise(clockwise);
    rotateClockwise(clockwise);

    if (clockwise==str2)
        return 1;

    rotateAntiClockwise(anticlockwise);
    rotateAntiClockwise(anticlockwise);

    if (anticlockwise==str2)
        return 1;

    return 0;
}

int main(){
    string str1 = "amazon";
    string str2 = "azonam";

    cout<<isRotated(str1, str2)<<endl;

    return 0;
}
//TC: O(n)
//SC: O(1)