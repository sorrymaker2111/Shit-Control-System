#include <student.h>

Student::Student()//���캯��
{
	this->Name = "";
	this->Id = 0;
	this->p = NULL;
	this->CourseNumber = 0;
}

Student::~Student() //��������
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


void Student::Show_Menu() //��ʾ�˵�
{
	bool flag = false;
	while (true)
	{
		cout << "------------------------------" << endl;
		cout << "---------- ѧ��ҳ�� -----------" << endl;
		cout << "��ѡ���ܣ� " << endl;
		cout << "1.��ʾ������Ϣ" << endl;
		cout << "2.�޸ĸ�����Ϣ" << endl;
		cout << "3.���ҿγ�" << endl;
		cout << "4.ѡ��γ�" << endl;
		cout << "5.��ʾ��ѡ�γ�" << endl;
		cout << "6.�˳���¼" << endl;

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
			this->Search_Course();
			break;
		case 4:
			this->Select_Course();
			break;
		case 5:
			this->Show_SelectedCourse();
			break;
		case 6:
			if (this->Logout())
			{
				flag = true;
			}
			break;
		}

		if (flag)
		{
			
			break;
		}
	}
	
	system("pause");
	system("cls");
}

bool Student::Logout() //�˳���¼
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

void Student::Show_SelectedCourse() //��ʾ��ѡ�γ�
{
	if (this->p != NULL && this->CourseNumber !=0)
	{
		for (int i = 0; i < this->CourseNumber; i++)
		{
			this->p[i]->Show_CourseInfor();
		}
	}
	else {
		cout << "��û��ѡ��γ̣�" << endl;
	}
	

	system("pause");
	system("cls");
}

void Student::Search_Course() //���ҿγ�
{
	cout << "������γ�����: " << endl;
	string CourseName = "";
	cin >> CourseName;

	bool flag = false;
	int number = 0;

	for (int i = 0; i < this->con2.CourseNumber; i++)
	{
		if (con2.p[i]->CourseName == CourseName)
		{
			flag = true;
			number = i;
			break;
		}
	}

	if (flag)
	{
		cout << "�ɹ����ҵ��ÿγ̣��ÿγ���ϢΪ: " << endl;
		con2.p[number]->Show_CourseInfor();
	}
	else {
		cout << "����ʧ�ܣ�û�д˿γ�!" << endl;
	}


	system("pause");
	system("cls");

}
void Student::Show_Infor() //��ʾ������Ϣ
{
	cout << "ѧ������: " << this->Name << endl;
	cout << "��ţ�" << this->Id << endl;

	system("pause");
	system("cls");
}
void Student::Change_Infor() //�޸ĸ�����Ϣ
{
	string Name = "";
	int Id = 0;

	cout << "������Ҫ�޸ĵ���Ϣ:" << endl;

	cout << "ѧ������: " << endl;
	cin >> Name;
	this->Name = Name;

	cout << "���: " << endl;
	cin >> Id;
	this->Id = Id;

	cout << "�޸ĳɹ�!" << endl;

	system("pause");
	system("cls");
}
void Student::Select_Course() //ѡ��γ�
{
	//��ʾ��ѡ�γ�
	if (this->con2.p != NULL)
	{
		cout << "��ѡ�γ�����: " << endl;
		this->con2.Show_Course();
	}

	//�Ƿ�ѡ��γ�
	cout << "�Ƿ�ѡ��γ�?" << endl;
	cout << "1.��" << endl;
	cout << "2.��" << endl;

	int key = 0;
	cin >> key;

	if (key == 1)
	{
		cout << "������ѡ��Ŀγ���Ŀ: " << endl;
		int number = 0;
		cin >> number;


		Course** newspace = new Course* [number * sizeof(Course*)];

		if (this->p != NULL)
		{
			for (int i = 0; i < this->CourseNumber; i++)
			{
				newspace[i] = this->p[i];
			}
			
		}

for (int i = this->CourseNumber; i < this->CourseNumber + number; i++)
		{

cout << "�������" << i - this->CourseNumber + 1 << "�ſγ̵�����:" << endl;
			string name = "";
			cin >> name;
			
			int temp = this->con2.Is_Course(name);
			if (temp != -1)
			{
				newspace[i] = this->con2.p[temp];

			}

			
		}
   delete[]this->p;
   this->CourseNumber = this->CourseNumber + number;
   this->p = newspace;
	}

	system("pause");
	system("cls");

}
