#include <iostream>
#include <conio.h>

int main(){
        int i=0;
        while((i=getch())!=46){
                std::cout<<i<<'\t';
        }
        return 0;
}
