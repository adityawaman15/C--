#include <iostream>
using namespace std;

bool (int a[], int b[]){
    for (int i = 0; i <26;i++){
        if(count1[i] != count2[i]){
            return false;
        }
    }
    return true;

}

int main(){

    string s2 = "eidbaoooo";
    string s1 = "ab";

    int count1[26] = {0};
    int count2[26] = {0};

    for(int i = 0; i < s1.length(); i++){
        count1[s1[i] - 'a']++;
    }

    for (int i = 0; i < s2.length(); i++){

        count2[26];
        
    }

    



    
    


}