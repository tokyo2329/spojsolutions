#include <iostream>

int nww(int, int);

int main() {

    int n;
    std::cin >> n;


    while(n--) {

        int gr1, gr2;
        std::cin >> gr1 >> gr2;

        std::cout << nww(gr1, gr2) << std::endl;

    }


    return 0;
}

int nww(int a, int b) {

    int a2=a, b2=b;

    //nwd
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }

    //return nww
    return (a2*b2)/a;

}