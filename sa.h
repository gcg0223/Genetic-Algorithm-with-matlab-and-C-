#pragma once

//��Ⱥ��С
const int popsize = 100;
//���볤��  һ�η���������
int chromlength = 10;
//��ѡ����
int candidate = 2;
//�������
const float pc = 0.3;
//�������
const float pm = 0.001;
//����������
int iteration = 40;
//��ǰ����ѭ��
int early_stop = 10;


//��ʼ����Ⱥ
int* initpop(int popsize,int chromlength);
//Genetic algorithms �Ŵ��㷨��ѭ������
void GAmain(double cr0);                  
//Mutation operation �������
int * mutation(int * pop, float pm);		
//Crossover Operation �������
int * crossover(int * pop, float pc);		
//ѡ���Ʋ���
float* selection(float* pop, float* fitvalue); 


double myu(double a, double b) // Uniform Distribution
{
	double y;
	if (a>b) {
		printf("\nThe first parameter should be less than the second!");
		exit(1);
	}
	y = (double)rand() / (RAND_MAX);
	return (a + (b - a)*y);
}

//����a-b֮��������
int rdint(int a, int b)
{
	double x;
	int temp;
	x = myu(a, b + 0.99);
	temp = int(floor(x));
	return(temp);
}