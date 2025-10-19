#include <iostream>

/*
First of all, I wanted to use converting to string and solve it easily, but then I decided to do extra task and complete it without converting to string.
My first idea was to make two pointers (left and right), but case x=100021 failed, coz I was substracting from x 100000, and x was 21 after that,
 so it wasnt 00021 as I expected and I decided to use usual dynamic array.
*/


int isize(int x){
    int size=0;
    while(x>0){
        x/=10;
        size++;
    }
    return size;
}

bool isPalindrome(int x){
    if(x<0) return false;
    int size=isize(x);
    int *array = new int[size];
    for(int i=0; i<size; i++){
        array[i]=x%10;
        x/=10;
    }
    int i=0;
    while(i<size/2){
        if(array[i]!=array[size-i-1]){
            delete [] array;
            return false;
        }
        i++;
    }
    delete [] array;
    return true;
}

int main(){
    int x=123211;
    std::cout << x << " <> " << isPalindrome(x) << std::endl;
}