//
//  main.cpp
//  Trapzoid method
//
//  Created by Ali Hussein on 24.12.2023.
//


#include <iostream>
#include <cmath>

double func(double x){
    return 2*x;
}

double find_multi(double a, double b, double n){
    double result = (b-a)/n;
    return result / 2;
}

double sum_of_functions_times_two(double n, double a, double b){
    double h = (b-a)/n;
    double temp = func(h);
    double temp_h = h;
    for(int i=1;i<=n-2;i++){
        temp_h += h;
        temp += func(temp_h);
    }
    return 2*(temp);
}

void approximate_value(double n, double a, double b){
    double sum_of_funs = sum_of_functions_times_two(n, a, b);
    double result_x0 = func(a);
    double result_xn = func(b);
    double multi = find_multi(a, b, n);
    double all_result = multi * ( sum_of_funs + result_x0 + result_xn);
    
    std::cout<<all_result<<std::endl;
}


int main(){
    approximate_value(4, 0, 3);
}




