#include <iostream>
using namespace std;

string reverse(string a, int s, int e){
    char temp;
    while(s<e){
        temp = a[s];
        a[s] = a[e];
        a[e] = temp;

        s++;
        e--;
    }
    return a;



}

string leetcode(string a, int size,int k){
    ;
   /* int s = 0;
    int e = size -1;

    

    while (s<=e){
        cout << s;
        if(s+k <=e){

        a = reverse(a,s,s+k-1);
        s+=(k+1);
    }
        else{
            a = reverse(a,s,e);


        }
        s+=(k+1);
    }
    return a; */

    int s = 0;
    int e = size -1;

    while(s<=e){


        if(e>=s+k-1){
        a = reverse(a,s,s+k-1);}
        else{
        a = reverse(a,s,s+k-1);
        }

        s+=2*k;

    }
    return a;



}
int main(){
    string s= "abcdefg";
    string ans = leetcode(s,5,2);

    cout << ans << endl;



}
