#include <iostream>
#include <string>
using namespace std;

int main() {
  //make variable
  string str;
  //use getline so if there are spaces it would include them
  getline(cin, str);
  //make for loop for converting lowercase to uppercase
  for(int i = 0; i<str.length(); i++){
    if(str[i]>='a' and str[i]<='z'){
      str[i] = str[i]-32;
    }
    else {
      continue;
    }
  }
  //output
  cout<<str<<endl;
  //make for loop for converting uppercase to lowercase
  for(int i = 0; i<str.length(); i++){
    if(str[i]>='A' and str[i]<='Z'){
      str[i] = str[i]+32;
    }
    else {
      continue;
    }
  }
  //output
  cout<<str;
}