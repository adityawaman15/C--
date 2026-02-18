    #include <iostream>
    using namespace std;

    int Peak(int nums[],int size){
        int s = 0;
        int e = size -1;
        int mid;

        while(s<e){
            mid = s +(e-s)/2;

            if(nums[mid]>= nums[0]){
                s = mid +1;
            }
            else{
                e = mid;;
            }
        }
        return s;


    }
    int main(){

        int even[8] = {2,3,4,6,7,-1,0,1};
        int odd[7] = {1,4,7,11,-2,-1,0};

        int E = Peak(even,8);
        int O = Peak(odd,7);

        cout << "Even | "<< E << endl;
        cout << "Odd | "<< O << endl;

    }