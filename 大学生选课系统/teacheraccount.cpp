#include <teacheraccount.h>

TeacherAccount::TeacherAccount()
{
	this->Users = "";
	this->Password = "";
	this->Id = 0;
	this->Flag = 2;
}

void TeacherAccount::Show_Account() //��ʾ�˺���Ϣ
{
	cout << "�û���: " << this->Users << endl;
	cout << "����: " << this->Password << endl;
	cout << "���: " << this->Id << endl;
}