#include <iostream>
float Sum(float* d,int count){
	float s = 0;
	for (int i = 0; i < count; i++) {
		s += *(d+i);
	}
	return s;
}

void AverageSum(float* d, int count, float* a, float *s) {
	*s = Sum(d,count);
	*a = *s / count;
}
int main() {
	float data[] = { 2,3,-1.8f,50,-20,10,0,8 };
	float sum;
	float average;
	AverageSum(&data[3], 5,&average, &sum);
	std::cout << "‡Œv="<<sum<<"•½‹Ï"<<average;
	return 0;
}