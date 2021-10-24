#include <iostream>

int main() {


    int t=0;
    std::cin>>t;

    while(t--) {

        int maks, podzielne, niepodzielne;
        std::cin>>maks>>podzielne>>niepodzielne;

        for(int i=0;i<maks;i++) {

            if((i%podzielne)==0 and (i%niepodzielne)!=0) {
                std::cout<<i<<" ";
            }

        }

        std::cout<<std::endl;

    }


    return 0;
}