#include <control.h>

Control::Control() //���캯��
{
	this->Name = "";
	this->Id = 0;
	this->p = NULL;
	this->CourseNumber = 0;
}

Control::~Control()//��������
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

void Control::Show_Menu() //��ʾ�˵�
{
	bool flag = false;
	while (true)
	{
		cout << "------------------------------" << endl;
		cout << "---------- ������ҳ�� -----------" << endl;
		cout << "��ѡ���ܣ� " << endl;
		cout << "1.���ӿγ�" << endl;
		cout << "2.ɾ���γ�" << endl;
		cout << "3.��ʾ�γ�" << endl;
		cout << "4.�˳���¼" << endl;

		int key = 0;
		cin >> key;

		switch (key)
		{
		case 1:
			this->Add_Course();
			break;
		case 2:
			this->Delete_Course();
			break;
		case 3:
			this->Show_Course();
			break;
		case 4:
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


void Control::Show_Course() //��ʾ�γ�
{
	if (this->p != NULL)
	{
		for (int i = 0; i < this->CourseNumber; i++)
		{
			this->p[i]->Show_CourseInfor();
		}
	}
	else {
		cout << "��û�пγ̣�" << endl;
	}
	

	system("pause");
	system("cls");
}


bool  Control::Logout() //�˳���¼
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


void Control::Add_Course() //���ӿγ�
{
	cout << "Ҫ���Ӽ��ſγ̣�" << endl;
	int number = 0;
	cin >> number;

	//�����µ������ڴ�
 Course** newspace = new Course * [(this->CourseNumber + number) * sizeof(Course*)];

   //����ԭ���Ŀγ̵���������
  if (this->p != NULL)
 {
	 for (int i = 0; i < this->CourseNumber; i++)
	 {
		 newspace[i] = this->p[i];
	 }
   }
 

   //����µĿγ̵�������
 for (int i = this->CourseNumber; i < this->CourseNumber + number; i++)
 {
	 cout << "��ѡ��Ҫ���ӵĵ�" << i - this->CourseNumber + 1 << "�ſγ�: " << endl;
	 cout << "1.����" << endl;
	 cout << "2.Ӣ��" << endl;
	 cout << "3.����" << endl;
	 cout << "4.�й�ʷ" << endl;
	 cout << "5.C++���Գ������" << endl;

	 int key = 0;
	 cin >> key;

	 switch (key)
	 {
	 case 1:
		 newspace[i] = new Soccer;
		 break;
	 case 2:
		 newspace[i] = new English;
		 break;
	 case 3:
		 newspace[i] = new AdvancedMath;
		 break;
	 case 4:
		 newspace[i] = new ChineseHistory;
		 break;
	 case 5:
		 newspace[i] = new CPP;
		 break;
	 }
 }

 //�ͷ�ԭ������
 delete[]this->p;

 //��������
 this->p = newspace;
 newspace = NULL;
 this->CourseNumber = this->CourseNumber + number;

 cout << "�ɹ����" << number << "�ſγ̣�" << endl;

 system("pause");
 system("cls");
}

void Control::Delete_Course() //ɾ���γ�
{
	cout << "������Ҫɾ���Ŀγ�" << endl;
	string CourseName = "";
	cin >> CourseName;

	//�ж��Ƿ�������γ�
	bool flag = false;
	int number = 0; //��¼�±�

	for (int i = 0; i < this->CourseNumber; i++)
	{
		if (this->p[i]->CourseName == CourseName)
		{
			flag = true;
			number = i;
			break;
		}
	}

	if (flag) //������γ�
	{
		//����ɾ��
		for (int i = number; i < this->CourseNumber; i++)
		{
			if (i + 1 < this->CourseNumber)
			{
				this->p[i] = this->p[i + 1];
			}
			
		}

		cout << "ɾ���γ̳ɹ�!" << endl;

		//��������
		this->CourseNumber = this->CourseNumber - 1;
	}
	else {
		cout << "ɾ��ʧ�ܣ�û���ҵ��˿γ�!" << endl;
	}

	system("pause");
	system("cls");
}

int Control::Is_Course(string name) //�ж��Ƿ��иÿγ�
{
	int number = -1; //��¼�±�

	for (int i = 0; i < this->CourseNumber; i++)
	{
		if (this->p[i]->CourseName == name)
		{
			number = i;
			break;
		}
	}

	return number;
}

