#include <controlaccount.h>

ControlAccount::ControlAccount()
{
	this->Users = "";
	this->Password = "";
	this->Id = 0;
	this->Flag = 3;
}

void ControlAccount::Show_Account() //��ʾ�˺���Ϣ
{
	cout << "�û���: " << this->Users << endl;
	cout << "����: " << this->Password << endl;
	cout << "���: " << this->Id << endl;
}