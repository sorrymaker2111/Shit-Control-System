#include <studentaccount.h>

StudentAccount::StudentAccount()
{
	this->Users = "";
	this->Password = "";
	this->Id = 0;
	this->Flag = 1;
}

void StudentAccount::Show_Account() //��ʾ�˺���Ϣ
{
	cout << "�û���: " << this->Users << endl;
	cout << "����: " << this->Password << endl;
	cout << "���: " << this->Id << endl;
}