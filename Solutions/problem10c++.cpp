#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
    bool isPrime(int i);
    __int64_t sum=0;
    __int64_t count=0;
    int percent=0;
    int upto = 2000000;
    int per = 20000;

//    int upto = 100000;
//    int per = 1000;
//    
//    int upto = 2;
//    int per = 1;

    for (int i = 0; i < upto; i++) {

        if (isPrime(i)) {
            sum+=i;
            count++;
            if(count%per==0)
            {
                percent++;
                cout<<float(percent)<<"%\n";
            }
        }
    }
    cout<<sum;
    cout<<endl<<count;
    
}

bool isPrime(int x)
{
    int check = 2;
    int count = 1;
    int rem=0,sq=0;
    sq=(pow(x,.5)+1);

    if (x!=0&&x!=1) {
        check=x;
        do
        {
            count++;
            rem=x%count;
            if (count>=sq)
            {
                count=x;
                break;
            }
        }while (rem!=0);
    };
    return(count==check);
}