#include <iostream>
#include <string>

using namespace std;

void reverse(string& str, int i,int j){

    cout << "Calling for string | "<< str << endl;
    if(i>=j){
        return;
    }

    swap(str[i],str[j]);

    reverse(str,i+1,j-1);
    
    
}

int main(){
    string word = "Aditya";
    reverse(word,0,word.length() -1 );

    
    
}