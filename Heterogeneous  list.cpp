#include<iostream>
#include<fstream>
#include<string.h>
#include<ctime>
#include<stdlib.h>
using namespace std;
class Shape
{
public:
	virtual double x()=0;
	virtual double data_r()=0;
	virtual double data_l()=0;
	virtual double data_w()=0;
	virtual double data_h()=0;
	virtual void showData() = 0;
	virtual double reArea() = 0;
	virtual double reVolume() = 0;
	Shape *next;
};
class TwoDimShape :public Shape
{
protected:
	int length;
	int width;
	int radius;
};
class ThreeShape :public Shape
{
protected:
	int length;
	int width;
	int heigth;
	int radius;
};
class Circle :public TwoDimShape
{
public:
	double x()
	{
		return 1;
	}
	Circle(int radius_s)
	{
		radius = radius_s;
	}
	double data_r()
	{
		return radius;
	}
	double data_l()
	{
		return 0;
	}
	double data_w()
	{
		return 0;
	}
	double data_h()
	{
		return 0;
	}
	void showData()
	{
		cout << "Circle's radius is:" << radius << endl;
	}
	double reArea()
	{
		cout << "Circle's area is:" << 3.14*radius*radius << endl;
		return 0;
	}
	double reVolume()
	{
		return 0;
	}
};
class Elipse :public TwoDimShape
{
public:
	double x()
	{
		return 2;
	}
	Elipse(int length_s, int width_s)
	{
		length = length_s;
		width = width_s;
	}
	double data_l()
	{
		return length;
	}
	double data_w()
	{
		return width;
	}
	double data_r()
	{
		return 0;
	}
	double data_h()
	{
		return 0;
	}
	void showData()
	{
		cout << "Elipse's length is:" << length << endl;
		cout << "Elipse's width is:" << width << endl;
	}
	double reArea()
	{
		cout << "Elipse's area is:" << 3.14*length*width << endl;
		return 0;
	}
	double reVolume()
	{
		return 0;
	}
};
class Rectangle :public TwoDimShape
{
public:
	double x()
	{
		return 3;
	}
	Rectangle(int length_s, int width_s)
	{
		length = length_s;
		width = width_s;
	}
	double data_l()
	{
		return length;
	}
	double data_w()
	{
		return width;
	}
	double data_r()
	{
		return 0;
	}
	double data_h()
	{
		return 0;
	}
	void showData()
	{
		cout << "Rectangle's length is:" << length << endl;
		cout << "Rectangle's width is:" << width << endl;
	}
	double reArea()
	{
		cout << "Rectangle's area is:" << length*width << endl;
		return 0;
	}
	double reVolume()
	{
		return 0;
	}
};
class Triangle :public TwoDimShape
{
public:
	double x()
	{
		return 4;
	}
	Triangle(int length_s, int width_s)
	{
		length = length_s;
		width = width_s;
	}
	double data_l()
	{
		return length;
	}
	double data_w()
	{
		return width;
	}
	double data_h()
	{
		return 0;
	}
	double data_r()
	{
		return 0;
	}
	void showData()
	{
		cout << "Triangle's length is:" << length << endl;
		cout << "Triangle's width is:" << width << endl;
		return;
	}
	double reArea()
	{
		cout << "Triangle's area is:" << length*width / 2 << endl;
		return 0;
	}
	double reVolume()
	{
		return 0;
	}
};
class Ball :public ThreeShape
{
public:
	double x()
	{
		return 5;
	}
	Ball(int radius_s)
	{
		radius = radius_s;
	}
	double data_r()
	{
		return radius;
	}
	double data_l()
	{
		return 0;
	}
	double data_w()
	{
		return 0;
	}
	double data_h()
	{
		return 0;
	}
	void showData()
	{
		cout << "Ball's radius is:" << radius << endl;
	}
	double reArea()
	{
		cout << "Ball's area is:" << 3.14*radius*radius * 4 << endl;
		return 0;
	}
	double reVolume()
	{
		cout << "Ball's Volume is:" << 3.14*radius*radius*radius * 4 / 3 << endl;
		return 0;
	}
};
class Cylider :public ThreeShape
{
public:
	double x()
	{
		return 6;
	}
	Cylider(int heigth_s, int radius_s)
	{
		heigth = heigth_s;
		radius = radius_s;
	}
	double data_h()
	{
		return heigth;
	}
	double data_r()
	{
		return radius;
	}
	double data_l()
	{
		return 0;
	}
	double data_w()
	{
		return 0;
	}
	void showData()
	{
		cout << "Cylider's heigth is:" << heigth << endl;
		cout << "Cylider's radius is:" << radius << endl;
	}
	double reArea()
	{
		cout << "Cylider's area is:" << 2 * 3.14*radius*radius + 2 * 3.14*radius*heigth << endl;
		return 0;
	}
	double reVolume()
	{
		cout << "Cylider's volume is:" << 3.14*radius*radius*heigth << endl;
		return 0;
	}
};
class RectangularParallelepiped :public ThreeShape
{
public:
	double x()
	{
		return 7;
	}
     RectangularParallelepiped(int length_s, int width_s, int heigth_s)
	{
		length = length_s;
		width = width_s;
		heigth = heigth_s;
	}
	 double data_l()
	{
		return length;
	}
	double data_w()
	{
		return width;
	}
	double data_h()
	{
		return heigth;
	}
	double data_r()
	{
		return 0;
	}
	 void showData()
	 {
		 cout << "RectangularParallelepiped's length is:" << length << endl;
		 cout << "RectangularParallelepiped's width is:" << width << endl;
		 cout << "RectangularParallelepiped's heigth is:" << heigth << endl;
	 }
	 double reArea()
	 {
		 cout << "RectangularParallelepiped's area is:" << 2 * length*width + 2 * length*heigth + 2 * width*heigth << endl;
		 return 0;
	 }
	 double reVolume()
	 {
		 cout << "RectangularParallelepiped's volume is:" << length*width*heigth << endl;
		 return 0;
	 }
};
/*Circle c;
Elipse e;
Rectangle r;
Triangle t;
Ball b;
Cylider c_s;
RectangularParallelepiped r_s;*/
void menu(Shape *&head);
void Insert(Shape *&head)
{
	cout << "请选择你需要建立的节点：" << endl;
	cout << "1.圆" << endl;
	cout << "2.椭圆" << endl;
	cout << "3.矩形" << endl;
	cout << "4.三角形" << endl;
	cout << "5.球" << endl;
	cout << "6.圆柱" << endl;
	cout << "7.长方体" << endl;
	int y;
	cin >> y;
	switch (y)
	{
	case 1:
	{
			  cout << "请输入圆的半径：" << endl;
			  int radius;
			  cin >> radius;
			  Circle c(radius);
			  Shape *s = &c;
			  Shape *q=head;
			  Shape *p = NULL;
			  s->reArea();
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p;q=p,p=p->next)
				  {
					  /*插入链表末尾*/
				  }
				  q->next = s;
			  }
			  q = head;
			  while (q)
			  {
				  q->showData();
				  q = q->next;
			  }
			  system("pause");
			  system("cls");
			  menu(head);
			  break;
	}
	case 2:
	{
			  cout << "请输入椭圆的长轴和短轴：" << endl;
			  int length,width;
			  cin >> length >> width;
			  Elipse e(length,width);
			  Shape *s = &e;
			  Shape *q = head;
			  Shape *p = NULL;
			  s->reArea();
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p; q = p, p = p->next)
				  {
					  /*插入链表末尾*/
				  }
				  q->next = s;
			  }
			  q = head;
			  while (q)
			  {
				  q->showData();
				  q = q->next;
			  }
			  system("pause");
			  system("cls");
			  menu(head);
			  break;
	}
	case 3:
	{
			  cout << "请输入正方形的长和宽：" << endl;
			  int length,width;
			  cin >> length >> width;
			  Rectangle r(length,width);
			  Shape *s = &r;
			  Shape *q = head;
			  Shape *p = NULL;
			  s->reArea();
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p; q = p, p = p->next)
				  {
					  /*插入链表末尾*/
				  }
				  q->next = s;
			  }
			  q = head;
			  while (q)
			  {
				  q->showData();
				  q = q->next;
			  }
			  system("pause");
			  system("cls");
			  menu(head);
			  break;
	}
	case 4:
	{
			  cout << "请输入三角形的长和宽：" << endl;
			  int length, width;
			  cin >> length >> width;
			  Triangle t(length, width);
			  Shape *s = &t;
			  Shape *q = head;
			  Shape *p = NULL;
			  s->reArea();
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p; q = p, p = p->next)
				  {
					  /*插入链表末尾*/
				  }
				  q->next = s;
			  }
			  q = head;
			  while (q)
			  {
				  q->showData();
				  q = q->next;
			  }
			  system("pause");
			  system("cls");
			  menu(head);
			  break;
	}
	case 5:
	{
			  cout << "请输入球的半径：" << endl;
			  int radius;
			  cin >> radius ;
			  Ball b(radius);
			  Shape *s = &b;
			  Shape *q = head;
			  Shape *p = NULL;
			  s->reArea();
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p; q = p, p = p->next)
				  {
					  /*插入链表末尾*/
				  }
				  q->next = s;
			  }
			  q = head;
			  while (q)
			  {
				  q->showData();
				  q = q->next;
			  }
			  system("pause");
			  system("cls");
			  menu(head);
			  break;
	}
	case 6:
	{
			  cout << "请输入圆柱体的半径和高：" << endl;
			  int radius, heigth;
			  cin >> radius >> heigth;
			  Cylider c_s(radius, heigth);
			  Shape *s = &c_s;
			  Shape *q = head;
			  Shape *p = NULL;
			  s->reArea();
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p; q = p, p = p->next)
				  {
					  /*插入链表末尾*/
				  }
				  q->next = s;
			  }
			  q = head;
			  while (q)
			  {
				  q->showData();
				  q = q->next;
			  }
			  system("pause");
			  system("cls");
			  menu(head);
			  break;
	}
	case 7:
	{
			  cout << "请输入长方体的长，宽，高：" << endl;
			  int length,width,heigth;
			  cin >> length>>width>> heigth;
			  RectangularParallelepiped r_s(length,width,heigth);
			  Shape *s = &r_s;
			  Shape *q = head;
			  Shape *p = NULL;
			  s->reArea();
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p; q = p, p = p->next)
				  {
					  /*插入链表末尾*/
				  }
				  q->next = s;
			  }
			  q = head;
			  while (q)
			  {
				  q->showData();
				  q = q->next;
			  }
			  system("pause");
			  system("cls");
			  menu(head);
			  break;
	}
	}
}
void Delete(Shape *&head)
{
	Shape *p;
	int k=0;
	int y=2;
	if (!head)
	{
		cout << "链表不存在！" << endl;
		system("pause");
		menu(head);
		return;
	}
	p = head;
	while (p)
	{
		k++;
		p = p->next;
	}
	cout << "当前结点数为:" << k << endl;
	cout << "请输入需要删除的节点序号:" << endl;
	int x;
	cin >> x;
	while (x<1 || x>k)
	{
		cout << "输入有误，请重新输入" << endl;
		cin >> x;
	}
	if (x == 1)
	{
		p = head;
		head = head->next;
		delete p;
		p = NULL;
		cout << x << "号节点删除成功！" << endl;
		return;
	}
	else
	for (Shape *q = head; q->next; q = q->next)
	{
		if (y == x)
		{
			p = q->next;
			q->next = p->next;
			delete p;
			p = NULL;
			cout << x << "号节点删除成功！" << endl;
			return;
		}
		y++;
	}
	system("pause");
	system("cls");
	menu(head);
}
void Traversal(Shape *&head)
{
	Shape *p;
	p = head;
	while (p)
	{
		p->showData();
		p = p->next;
	}
	system("pause");
	menu(head);
}
void Reversal(Shape *&head)
{
	if (head == NULL)
	{
		cout << "链表不存在！" << endl;
		system("pause");
		system("cls");
		menu(head);
	}
	Shape *p, *q, *s;
	p = head;
	q = head->next;
	while (q)
	{
		s = q->next;
		q->next = p;
		p = q;
		q = s;
	}
	head->next = NULL;
	head = p;
	q = head;
	while (q)
	{
		q->showData();
		q = q->next;
	}
	system("pause");
	system("cls");
	menu(head);
}
void SaveData(Shape *&head)
{
	Shape *p;
	p=head;
	ofstream inf("D:\\data.txt",ios::app);
	while(p)
	{
		if(p->x()==1)
		{
			inf<<p->x()<<endl;
			inf<<p->data_r()<<endl;
		}
		else
			if(p->x()==2)
				{
					inf<<p->x()<<endl;
					inf<<p->data_l()<<endl;
		            inf<<p->data_w()<<endl;
			    }
			else
				if(p->x()==3)
				{
					inf<<p->x()<<endl;
					inf<<p->data_l()<<endl;
					inf<<p->data_w()<<endl;
				}
				else
					if(p->x()==4)
					{
						inf<<p->x()<<endl;
						inf<<p->data_l()<<endl;
						inf<<p->data_w()<<endl;
					}
					else
						if(p->x()==5)
						{
							inf<<p->x()<<endl;
							inf<<p->data_r()<<endl;
						}
						else
							if(p->x()==6)
							{
								inf<<p->x()<<endl;
								inf<<p->data_r()<<endl;
								inf<<p->data_h()<<endl;
							}
							else
								if(p->x()==7)
								{
									inf<<p->x()<<endl;
									inf<<p->data_l()<<endl;
									inf<<p->data_w()<<endl;
									inf<<p->data_h()<<endl;
								}
								p=p->next;
	}
	system("pause");
	system("cls");
	menu(head);
}
void RestoreData(Shape *&head)
{
	int a[20];
	int b[100];
	int i=0,j=0;
	Shape *k;
	ifstream in=ifstream("D:\\answer.txt");
		while(!in.eof())
		{
			in>>a[i];
			if(a[i]==1)
				{
					in>>b[j];
					i++;
					j++;
					Circle c(b[j]);
			  Shape *s = &c;
			  Shape *q=head;
			  Shape *p = NULL;
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p;q=p,p=p->next)
				  {
				  }
				  q->next = s;
			  }
		       }
			else 
				if(a[i]==2)
				{
					in>>b[j];
					in>>b[j+1];
					 Elipse e(b[j],b[j+1]);
					i++;
					i++;
					j++;
					j++;
			  Shape *s = &e;
			  Shape *q=head;
			  Shape *p = NULL;
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p;q=p,p=p->next)
				  {
				  }
				  q->next = s;
			  }
		       }
				else
				if(a[i]==4)
				{
					in>>b[j];
					in>>b[j+1];
					 Rectangle r(b[j],b[j+1]);
					i++;
					i++;
					j++;
					j++;
			  Shape *s = &r;
			  Shape *q=head;
			  Shape *p = NULL;
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p;q=p,p=p->next)
				  {
				  }
				  q->next = s;
			  }
				}
				else
				if(a[i]==3)
				{
					in>>b[j];
					in>>b[j+1];
					Triangle t(b[j],b[j+1]);
					i++;
					i++;
					j++;
					j++;
			  Shape *s = &t;
			  Shape *q=head;
			  Shape *p = NULL;
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p;q=p,p=p->next)
				  {
				  }
				  q->next = s;
			  }
				}
				else
				if(a[i]==4)
				{
					in>>b[j];
					in>>b[j+1];
					Triangle t(b[j],b[j+1]);
					i++;
					i++;
					j++;
					j++;
			  Shape *s = &t;
			  Shape *q=head;
			  Shape *p = NULL;
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p;q=p,p=p->next)
				  {
				  }
				  q->next = s;
			  }
				}
				else
				if(a[i]==5)
				{
					in>>b[j];
					Ball t(b[j]);
					i++;
					j++;
			  Shape *s = &t;
			  Shape *q=head;
			  Shape *p = NULL;
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p;q=p,p=p->next)
				  {
				  }
				  q->next = s;
			  }
				}
				else
				if(a[i]==6)
				{
					in>>b[j];
					in>>b[j+1];
					Cylider c_s(b[j],b[j+1]);
					i++;
					i++;
					j++;
					j++;
			  Shape *s = &c_s;
			  Shape *q=head;
			  Shape *p = NULL;
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p;q=p,p=p->next)
				  {
				  }
				  q->next = s;
			  }
				}
				if(a[i]==7)
				{
					in>>b[j];
					in>>b[j+1];
					in>>b[j+2];
					RectangularParallelepiped r_s(b[j],b[j+1],b[j+2]);
					i++;
					i++;
					i++;
					j++;
					j++;
					j++;
			  Shape *s = &r_s;
			  Shape *q=head;
			  Shape *p = NULL;
			  if (head == NULL)
			  {
				  head = s;
			  }
			  else
			  {
				  for (q = head, p = head->next; p;q=p,p=p->next)
				  {
				  }
				  q->next = s;
			  }
				}
	  i++;
		}
		k=head;
		while(k)
		{
			k->reArea();
			k=k->next;
		}
		system("pause");
		system("cls");
		menu(head);
}
void menu(Shape *&head)
{
	cout << "<<异质链表>>" << endl;
	cout << "A.插入节点" << endl;
	cout << "B.删除节点" << endl;
	cout << "C.反转链表" << endl;
	cout << "D.遍历链表" << endl;
	cout << "E.保存数据" << endl;
	cout << "F.恢复数据" <<endl;
	char x;
	cin >> x;
	switch (x)
	{
	case 'A':Insert(head);
		break;
	case 'B':Delete(head);
		break;
	case 'C':Reversal(head);
		break;
	case 'D':Traversal(head);
		break;
	case'E':SaveData(head);
		break;
	case'F':RestoreData(head);
		break;
	}
}
int main()
{
	/*异质链表*/
	Shape *head = NULL;
	menu(head);
}

