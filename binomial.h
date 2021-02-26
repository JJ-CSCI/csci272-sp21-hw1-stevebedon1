class Binomial {
  float coefficient1;
  float coefficient2;
  int power1;
  int power2;
public:
Binomial(float coef1 = 1.0, int pw1 = 1, float coef2 = 1.0, int pw2 = 1);
float GetCoefficient(int index);
int GetPower(int index);
int SetPower(int index, int powerNew);
int Add(Binomial &b);
void Multiply(float multi);
void Multiply(float coefMul, int powerMul);
};