// ���N�f�f�̃f�[�^���i�[����\���̂̒�`
struct HealthCheck {
  string name;		// ����
  double height;	// �g��
  double weight;	// �̏d
  double bmi;		// BMI
};

// BMI�����߂�֐��̃v���g�^�C�v�錾
double getBmi(double height, double weight);
double getBmi(const HealthCheck *phc);

// 2���������������֐��̃v���g�^�C�v�錾
bool quadEq(double a, double b, double c, double *px1, double *px2);

// �z��̕��ϒl��Ԃ��֐��̃v���g�^�C�v�錾
double getAverage(const int *a, int length);
