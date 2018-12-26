#include <iostream>
#include <fstream>
int main(int argc, char * argv[])
{
    std::fstream myfile("input.txt", std::ios_base::in);

    long long a;
    while (myfile >> a)
    {
        printf("%lld ", a);
    }

    //getchar();

    return 0;
}