#include <stdio.h>
#include "my_complex.h"

int main() {
	//complex numbers given
	Complex a = {3, 4};
	Complex b = {5, 12};
	
	//Complex (*add_pointer)(Complex, Complex);
	//add_pointer = complex_add;
	//handler(add_pointer,a, b);

	//Array of function pointers that holds add, sub, mult, div
	Complex (*fn_hdr[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	//array of function pointers that holds phase and magnitude
	double (*fn_hdlr[2])(Complex) = {phase, magnitude};
	//for loop to call each complex function with the complex numbers given
	int i;
	for(i=0; i<4; i++) {
		handler(fn_hdr[i], a ,b);
	}
	
	//for loop to call each double function with the complex numbers provided
	int q;
	for(q=0; q<2; q++) {
		handler1(fn_hdlr[q], a);
		handler1(fn_hdlr[q], b);
	}
	return 0;
}
