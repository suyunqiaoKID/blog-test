#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
void sighup();
void sighin();
void sigh();
void index();
void watch();
void write();
void us();
void superman();
char in;
string my="NULL";
int main(){
	system("title suyunqiaoKID's blog");
	cout<<"-------------------"<<endl;
	cout<<"| 1.ע��"<<endl; 
	cout<<"| 2.��¼"<<endl;
	cout<<"| 3.�˳�"<<endl; 
	cout<<"--------------------"<<endl;
	in=getch();
	switch(in){
		case '1' : sighup();break;
		case '2' : sighin();break;
		case '3' : return 0;
		default : cout<<"��������ȷ����"<<endl;system("cls");return main();
	}
}
void sighup(){
	string username,password;
	cout<<"�����������û���(A-Z,a-z,0-9)"<<endl;
	cin>>username;
	cout<<"��������������(A-Z,a-z,0-9)"<<endl;
	cin>>password;
	ofstream out("user.txt",ios::app);
	out<<username<<endl;
	out<<password<<endl;
	out.close();
	cout<<"ע��ɹ����뷵�ص�¼"<<endl;
	Sleep(3000);
	system("cls");
	sighin();
}
void sighin(){
	string username,password;
	string DATA1,DATA2;
	cout<<"�����������û���"<<endl;
	cin>>username;
	cout<<"��������������"<<endl;
	cin>>password;
	ifstream in("user.txt");
	while(in>>DATA1&&in>>DATA2){
		if(username==DATA1&&password==DATA2){
			my=username;
			in.close();
			return sigh();
		}
	}
	cout<<"������û�����������������"<<endl;
	Sleep(3000);
	system("cls");
	sighin();
}
void sigh(){
	cout<<"��ӭ������"<<my<<endl;
	cout<<"���ڷ�����ҳ..."<<endl;
	Sleep(3000);
	system("cls");
	return index();
}
void index(){
	if(my=="NULL"){
		cout<<"�˺�״̬�쳣�������µ�¼��"<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
	cout<<"��ӭ����suyunqiaoKID��blog��"<<endl<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"| 1.д����"<<endl;
	cout<<"| 2.������"<<endl;
	cout<<"| 3.�ǳ�"<<endl;
	cout<<"----------------------------"<<endl;
	in=getch();
	switch(in){
		case '1' : write();break;
		case '2' : watch();break;
		case '3' : my="NULL";cout<<"�ѵǳ����ͣ����ڷ��ص�¼����...";Sleep(3000);system("cls");main();break;
		default : cout<<"��������ȷ����"<<endl;system("cls");return index();
	}
}
void write(){
	string blog;
	system("cls");
	cout<<"�����벩�����ݣ���Enter��ո��Է���"<<endl; 
	cin>>blog;
	ofstream out("blog.txt",ios::app);
	out<<my<<endl;
	out<<blog<<endl;
	out.close();
	cout<<"�ѷ������ͣ����ڷ�����ҳ..."<<endl;
	Sleep(3000);
	system("cls");
	index();
}
void watch(){
	string username,blog;
	char c;
	ifstream in("blog.txt");
	while(in>>username&&in>>blog){
		system("cls");
		cout<<"��������鿴��һƪ����,��Q������ҳ"<<endl;
		cout<<"����"<<username<<endl; 
		cout<<"����"<<blog<<endl;
		c=getch();
		if(c=='q'||c=='Q'){
			cout<<"����Ϊ��������ҳ..."<<endl;
			Sleep(3000);
			system("cls");
			return index();
		}
		
	}
	cout<<"�Ѿ������һƪ�����ˣ�����Ϊ��������ҳ..."<<endl;
	Sleep(3000);
	system("cls");
	index();
}
