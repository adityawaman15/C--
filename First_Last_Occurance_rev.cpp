#include <iostream>
using namespace std;

int FOcc(int nums[], int size, int target){
    int e = size -1;
    int s = 0;
    int ans = -1;

    while ( s<= e){
        int mid = s + (e-s)/2;

        if( nums[mid] == target){
             ans = mid;
            e = mid -1;
        }
        
        else if(nums[mid] > target){
            e = mid-1;
        }
        else{
            s = mid +1;
        }
    }
    return ans;
    
}

int LOcc(int nums[], int size, int target){
    int e = size -1;
    int s = 0;
    int ans = -1;

    while ( s<= e){
        int mid = s + (e-s)/2;

        if( nums[mid] == target){
             ans = mid;
            s = mid +1;
        }
        
        else if(nums[mid] > target){
            e = mid-1;
        }
        else{
            s = mid +1;
        }
    }
    return ans;
    
}
int main(){
    int even[8] ={1 ,3,4,4,4,4,5,6};
    int odd[7] = {2,5,6,6,6,8,9};

    int FE = FOcc(even,8,4);
    int LE = LOcc(even,8,4);f
    int FO = FOcc(odd,7,6);
    int LO = LOcc(odd,7,6);

    cout  << "Even is <"<< FE << "," << LE <<">."<<endl;
    cout  << "Odd is <"<< FO << "," << LO <<">."<< endl;
    

}