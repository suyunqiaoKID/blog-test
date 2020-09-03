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
	cout<<"| 1.注册"<<endl; 
	cout<<"| 2.登录"<<endl;
	cout<<"| 3.退出"<<endl; 
	cout<<"--------------------"<<endl;
	in=getch();
	switch(in){
		case '1' : sighup();break;
		case '2' : sighin();break;
		case '3' : return 0;
		default : cout<<"请输入正确代号"<<endl;system("cls");return main();
	}
}
void sighup(){
	string username,password;
	cout<<"请输入您的用户名(A-Z,a-z,0-9)"<<endl;
	cin>>username;
	cout<<"请输入您的密码(A-Z,a-z,0-9)"<<endl;
	cin>>password;
	ofstream out("user.txt",ios::app);
	out<<username<<endl;
	out<<password<<endl;
	out.close();
	cout<<"注册成功！请返回登录"<<endl;
	Sleep(3000);
	system("cls");
	sighin();
}
void sighin(){
	string username,password;
	string DATA1,DATA2;
	cout<<"请输入您的用户名"<<endl;
	cin>>username;
	cout<<"请输入您的密码"<<endl;
	cin>>password;
	ifstream in("user.txt");
	while(in>>DATA1&&in>>DATA2){
		if(username==DATA1&&password==DATA2){
			my=username;
			in.close();
			return sigh();
		}
	}
	cout<<"密码或用户名错误！请重新输入"<<endl;
	Sleep(3000);
	system("cls");
	sighin();
}
void sigh(){
	cout<<"欢迎回来！"<<my<<endl;
	cout<<"正在返回主页..."<<endl;
	Sleep(3000);
	system("cls");
	return index();
}
void index(){
	if(my=="NULL"){
		cout<<"账号状态异常，请重新登录！"<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
	cout<<"欢迎来到suyunqiaoKID的blog！"<<endl<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"| 1.写博客"<<endl;
	cout<<"| 2.看博客"<<endl;
	cout<<"| 3.登出"<<endl;
	cout<<"----------------------------"<<endl;
	in=getch();
	switch(in){
		case '1' : write();break;
		case '2' : watch();break;
		case '3' : my="NULL";cout<<"已登出博客，正在返回登录界面...";Sleep(3000);system("cls");main();break;
		default : cout<<"请输入正确代号"<<endl;system("cls");return index();
	}
}
void write(){
	string blog;
	system("cls");
	cout<<"请输入博客内容，按Enter或空格以发布"<<endl; 
	cin>>blog;
	ofstream out("blog.txt",ios::app);
	out<<my<<endl;
	out<<blog<<endl;
	out.close();
	cout<<"已发布博客，正在返回主页..."<<endl;
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
		cout<<"按任意键查看下一篇博客,按Q返回主页"<<endl;
		cout<<"作者"<<username<<endl; 
		cout<<"内容"<<blog<<endl;
		c=getch();
		if(c=='q'||c=='Q'){
			cout<<"正在为您返回主页..."<<endl;
			Sleep(3000);
			system("cls");
			return index();
		}
		
	}
	cout<<"已经是最后一篇博客了，正在为您返回主页..."<<endl;
	Sleep(3000);
	system("cls");
	index();
}
