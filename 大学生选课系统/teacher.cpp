#include <teacher.h>

Teacher::Teacher()
{
	this->Name = "";
	this->Id = 0;
	this->p = NULL;
	this->CourseNumber = 0;
	this->Duty_ForCourse = "";
}
Teacher::~Teacher()
{
	if (this->p != NULL)
	{
		for (int i = 0; i < this->CourseNumber; i++)
		{
			if (this->p[i] != NULL)
			{
				delete p[i];
				p[i] = NULL;
			}
		}

		delete[]p;
		p = NULL;
	}
}

void Teacher::Show_Infor()//��ʾ������Ϣ
{
	cout << "��ʦ����: " << this->Name << endl;
	cout << "��ţ�" << this->Id << endl;
	cout << "����γ�: " << this->Duty_ForCourse << endl;

	system("pause");
	system("cls");
}
void Teacher::Change_Infor() //�޸ĸ�����Ϣ
{
	string Name = "";
	int Id = 0;
	string CourseName = "";

	cout << "������Ҫ�޸ĵ���Ϣ:" << endl;

	cout << "��ʦ����: " << endl;
	cin >> Name;
	this->Name = Name;

	cout << "���: " << endl;
	cin >> Id;
	this->Id = Id;

	cout << "����Ŀγ�: " << endl;
	cin >> CourseName;
	this->Duty_ForCourse = CourseName;

	cout << "�޸ĳɹ�!" << endl;

	system("pause");
	system("cls");
}
void Teacher::Show_Menu() //��ʾ�˵�
{
	bool flag = false;
	while (true)
	{
		cout << "------------------------------" << endl;
		cout << "---------- ��ʦҳ�� -----------" << endl;
		cout << "��ѡ���ܣ� " << endl;
		cout << "1.��ʾ������Ϣ" << endl;
		cout << "2.�޸ĸ�����Ϣ" << endl;
		cout << "3.�˳���¼" << endl;

		int key = 0;
		cin >> key;

		switch (key)
		{
		case 1:
			this->Show_Infor();
			break;
		case 2:
			this->Change_Infor();
			break;
		case 3:
			if (this->Logout())
			{
				flag = true;
			}
			break;

		}

		//����ѭ��
		if (flag)
		{
			
			break;
		}
	}

	system("pause");
	system("cls");

	
}

bool Teacher::Logout() //�˳���¼
{
	cout << "ȷ���˳���¼��" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.��������" << endl;

	int key = 0;
	cin >> key;

	if (key == 1)
	{
		return true;
	}
	else {
		system("pause");
		system("cls");
		return false;
	}
}