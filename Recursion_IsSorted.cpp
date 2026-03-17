                                        #include <iostream>
                                        using namespace std;

                                        void isSorted(int arr[],int size){

                                            if(size == 0 || size == 1){
                                                return;
                                            }

                                            cout << arr[0];

                                            isSorted(arr +1, size -1);
                                        }

                                        int main(){
                                            int box[8] = {1,2,3,4,5,6,7,7};

                                            isSorted(box,8);
                                        }