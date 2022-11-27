// https://pythontutor.com/iframe-embed.html#code=%23include%20%3Ciostream%3E%0A%0Adouble%20quadrato_copia%28double%20x%29%20%7B%0A%20%20return%20x%20*x%3B%0A%7D%0A%0Adouble%20quadrato_puntatore%28double%20*px%29%20%7B%0A%20%20return%20%28*px%29%20*%20%28*px%29%3B%0A%7D%0A%0Adouble%20quadrato_riferimento%28double%20%26rx%29%20%7B%0A%20%20return%20rx%20*%20rx%3B%0A%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20double%20a%20%3D%2010%3B%0A%20%20std%3A%3Acout%20%3C%3C%20quadrato_copia%28a%29%20%3C%3C%20std%3A%3Aendl%3B%0A%20%20std%3A%3Acout%20%3C%3C%20quadrato_puntatore%28%26a%29%20%3C%3C%20std%3A%3Aendl%3B%20%20%0A%20%20std%3A%3Acout%20%3C%3C%20quadrato_riferimento%28a%29%20%3C%3C%20std%3A%3Aendl%3B%20%20%0A%20%20return%200%3B%0A%7D&codeDivHeight=400&codeDivWidth=350&curInstr=14&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D
#include <iostream>

double quadrato_copia(double x) {
  return x *x;
}

double quadrato_puntatore(double *px) {
  return (*px) * (*px);
}

double quadrato_riferimento(double &rx) {
  return rx * rx;
}

double quadrato(double *px) {
  std::cout << "Passaggio del puntatore" << std::endl;
  return (*px) * (*px);
}

double quadrato(double &rx) {
  std::cout << "Passaggio per riferimento" << std::endl;
  return rx * rx;
}

int main() {
  double a = 10;
  std::cout << quadrato_copia(a) << std::endl;
  std::cout << quadrato_puntatore(&a) << std::endl;  
  std::cout << quadrato_riferimento(a) << std::endl;  
  std::cout << quadrato(a) << std::endl;
  std::cout << quadrato(&a) << std::endl;  
  
  return 0;
}