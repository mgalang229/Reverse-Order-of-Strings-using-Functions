#include <iostream>
using namespace std;
void reverseLetters(char newStr[100], char newStr2[100]);
void reverseOrder(char newStr[100], char newStr2[100]);
int i, j;
int main(){
    char str[100],str2[100];
    cout << "Enter some string: \n";
    cin.getline(str,100);
    str2[j] = '\0';
    reverseLetters(str,str2);
    reverseOrder(str,str2);
    cout << endl;
    return 0;
}
void reverseLetters(char newStr[100], char newStr2[100]){
    while(newStr[i] != '\0'){
        i++;
    }
    while(i > 0){
        newStr2[j] = newStr[--i];
        ++j;
    }
}
void reverseOrder(char newStr[100], char newStr2[100]){
    for(int i = 0; newStr2[i] != '\0'; i++){
        if(newStr2[i+1] == ' ' || newStr2[i+1] == '\0'){
            for(j = i; j >= 0 && newStr2[j] != ' '; j--){
                cout << newStr2[j];
            }
            cout << endl;
        }
    }
}
