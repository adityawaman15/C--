#include <iostream>
using namespace std;

bool isEqual(int count1[], int count2[]){
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
      
       int j = 0;
       int old_j = j;

       for (int j = 0; j < old_j + s1.length(); j++){

        count2[s1[j] - 'a']++;
        bool ans = isEqual(count1, count2);
        if(ans == true){
            return true;
        }
        else{
            if (j == s2.length()-1){return false;}
            count2[j] = 0;
            old_j++;

        }

       }
        
    }

    



    
    


}