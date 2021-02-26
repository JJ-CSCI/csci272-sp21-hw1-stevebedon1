#include "binomial.h"
Binomial::Binomial(float coef1, int pw1, float coef2, int pw2){
  coefficient1 = coef1;
  coefficient2 = coef2;
  if(pw1 < 1){pw1 = 1;};
  if(pw2 < 1){pw2 = 1;};
  power1 = pw1;
  power2 = pw2;
}
float Binomial::GetCoefficient(int index){
  if(index == 1){return coefficient1;}
  if(index == 2){return coefficient2;}
  else {return -1;}
}
int Binomial::GetPower(int index){
  if(index == 1){return power1;}
  if(index == 2){return power2;}
  else {return -1;}
}
int Binomial::SetPower(int index, int powerNew){
  if(index == 1){
    if(powerNew < 1){power1 = 1;}
    else {power1 = powerNew;}
    return 0;
  }
  if(index == 2){
    if(powerNew < 1){power2 = 1;}
    else {power2 = powerNew;}
    return 0;
  }
  return -1;
}
int Binomial::Add(Binomial &B){
  if(power1 == B.power1 && power2 == B.power2){
    coefficient1 += B.coefficient1;
    coefficient2 += B.coefficient2;
    return 0;
  }
  else {return -1;}
}
void Binomial::Multiply(float multi){
  coefficient1 *= multi;
  coefficient2 *= multi;
}
void Binomial::Multiply(float coefMul, int powerMul){
  coefficient1 *= coefMul;
  power1 += powerMul;
  coefficient2 *= coefMul;
  power2 += powerMul;
}
