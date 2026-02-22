#include <iostream>
using namespace std;

void func(){
    number = 10;
    vector<char> digits;
    while(number!=0){
        

    }

}

int main(){
    string s= "aaabbcccc";
    char a = s[0];
    string result;
    int count = 0;

    for(int i = 0; i < s.length(); i++){
        
            if (i>0 && s[i-1]!=s[i]){
                result.push_back(s[i-1]);
                result.push_back(count+48);
                count =1;
                a = s[i];
            }
            else{
                count++;
            }
            if(i == s.length()-1){
                result.push_back(s[i]);
                result.push_back(count+48);

            }
            cout << result << endl;
            cout<< "count | "<< count << endl;
        


        
    }
}