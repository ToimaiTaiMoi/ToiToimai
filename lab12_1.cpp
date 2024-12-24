#include<iostream>
#include <ctime>
using namespace std;

long long int fibonacci(long long int i);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}
long long int fibonacci(long long int i){
    if(i == 0){
        return 0;
    }if(i == 1){
        return 1;
    }else{
        return fibonacci(i-1) + fibonacci(i-2);
    }
}
