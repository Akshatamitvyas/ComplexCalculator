typedef struct complex_t {

float real;

float imaginary;

} complex_t;
complex_t sum(complex_t n1, complex_t n2) {
    complex_t temp;
    temp.real = n1.real + n2.real;
    temp.imaginary = n1.imaginary + n2.imaginary;
    return temp;
}
complex_t sub(complex_t n1, complex_t n2) {
    complex_t temp;
    temp.real = n1.real - n2.real;
    temp.imaginary = n1.imaginary - n2.imaginary;
    return (temp);
}
complex_t multiply(complex_t n1, complex_t n2) {
    complex_t temp;
    temp.real = (n1.real * n2.real)-(n1.imaginary*n2.imaginary);
    temp.imaginary = (n1.real * n2.imaginary)+(n2.real * n1.imaginary);
    return (temp);
}
complex_t divide(complex_t n1, complex_t n2) {
    complex_t temp,temp1;
    temp1.real = (n2.real * n2.real)+(n2.imaginary*n2.imaginary);
    temp.real = ((n1.real * n2.real)+(n1.imaginary*n2.imaginary))/temp1.real;
    temp.imaginary = ((n1.real * n2.imaginary)-(n2.real * n1.imaginary))/temp1.real;
    return (temp);
}