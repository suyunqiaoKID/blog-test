#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<time.h>
using namespace std;
void sighup();
void sighin();
void sigh();
void index();
void watch(int);
void write();
void us();
void superman();
void super();
void addman();
void watchman();
void null();
void mark(int);
void talk(int);
void watchtalk(int);
void superwatch();
void friends(int);
void search(int);
void watchuserblog(string);
void usernamesearch(string);
void usernum();
void addblack();
bool checknum(int);
bool checkuser(int);
bool manb(string);
bool blacktf(string);
int usernumout();
char in;
string my="NULL";
int uid=-1;
bool man=false;
int main(){
	system("cls");
	char c;
	system("title suyunqiaoKID's blog");
	cout<<"-------------------"<<endl;
	cout<<"| 1.ע��"<<endl; 
	cout<<"| 2.��¼"<<endl;
	cout<<"| 3.�˳�"<<endl; 
	cout<<"--------------------"<<endl;
	c=getch();
	switch(c){
		case '1' : sighup();break;
		case '2' : sighin();break;
		case '3' : return 0;
		default : cout<<"��������ȷ����"<<endl;system("cls");return main();
	}
}
bool checkuser(int x){
	int num;
	ifstream in("user num.txt");
	in>>num;
	if(x>num)
	return false;
	return true;
}
void usernamesearch(){
	string username,num,DATA1,DATA2;
	bool tf;
	char c;
	system("cls");
	cout<<"�������û���"<<endl;
	cin>>username;
	ifstream in("user.txt");
	while(in>>num&&in>>DATA1&&in>>DATA2){
		if(DATA1==username){
			tf=true;
			cout<<"��Ϊ���ҵ����û�"<<endl;
			cout<<"�û�����"<<DATA1<<endl;
			cout<<"�û���ţ�"<<num<<endl<<endl;
		}
	}
	if(tf==false){
		cout<<"δ�ҵ����û�"<<endl; 
	}
	cout<<"�����������"<<endl;
	c=getch();
	return index();
}
void searchnum(){
	string DATA1,DATA2;
	int num,x;
	char c;
	bool tf=false;
	system("cls");
	cout<<"�������û����"<<endl;
	cin>>x;
	ifstream in("user.txt");
	while(in>>num&&in>>DATA1&&in>>DATA2){
		if(num==x){
			tf=true;
			cout<<"��Ϊ���ҵ����û�"<<endl;
			cout<<"�û�����"<<DATA1<<endl;
			cout<<"�û���ţ�"<<num<<endl<<endl;
		}
	}
	if(tf==false){
		cout<<"δ�ҵ����û��������������"<<endl; 
	}
	cout<<"�����������"<<endl;
	c=getch();
	return index();
}
int usernumout(){
	int num;
	ifstream in("user num.txt");
	in>>num;
	return num;
}
void usernum(){
	int num;
	ifstream in("user num.txt");
	ofstream out("user num.txt");
	in>>num;
	out<<num+1<<endl;	
}
void sighup(){
	system("title suyunqiaoKID's blog sigh-up");
	string username,password,repeat,DATA1,DATA2;
	bool tf=false;
	int num;
	cout<<"���뷵�ص�¼���棬������'return'�Է���"<<endl<<endl;
	cout<<"�����������û���(A-Z,a-z,0-9)"<<endl;
	cin>>username;
	if(username=="return")
	main();
	cout<<"��������������(A-Z,a-z,0-9)"<<endl;
	cin>>password;
	if(password=="return")
	main();
	cout<<"��ȷ����������(A-Z,a-z,0-9)"<<endl;
	cin>>repeat;
	if(repeat=="return")
	main();
	ifstream in("user.txt");
	while(in>>num&&in>>DATA1&&in>>DATA2){
		if(DATA1==username){
			tf=true;
			break;
		}
	}
	if(tf==true){
		cout<<"ע��ʧ�ܣ��û����ѱ���¼�����ڷ��ص�¼����..."<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
	else if(password!=repeat){
		cout<<"�����������벻��ͬ����ȷ�Ϻ�������������"<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
	else{
		usernum();
		ofstream out("user.txt",ios::app);
		out<<usernumout()<<endl;
		out<<username<<endl;
		out<<password<<endl;
		out.close();
		cout<<"ע��ɹ����뷵�ص�¼"<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
}
void sighin(){
	system("title suyunqiaoKID's blog sigh-in");
	string username,password;
	string DATA1,DATA2;
	int num;
	cout<<"���뷵�ص�¼���棬������'return'�Է���"<<endl<<endl;
	cout<<"�����������û���"<<endl;
	cin>>username;
	if(username=="return")
	main();
	cout<<"��������������"<<endl;
	cin>>password;
	if(password=="return")
	main();
	ifstream in("user.txt");
	while(in>>num&&in>>DATA1&&in>>DATA2){
		if(username==DATA1&&password==DATA2){
			my=username;
			uid=num;
			in.close();
			return sigh();
		}
	}
	cout<<"������û�����������������"<<endl;
	Sleep(3000);
	system("cls");
	main();
}
void sigh(){
	system("cls");
	cout<<"��ӭ������"<<my<<endl;
	cout<<"���ڷ�����ҳ..."<<endl;
	Sleep(3000);
	system("cls");
	superman();
	return index();
}
void index(){
	system("title suyunqiaoKID's blog index");
	null();
	system("cls");
	char c;
	cout<<"��ӭ����suyunqiaoKID��blog��    ��ǰ�û���"<<my<<"    �û���ţ�"<<uid<<"   �û���ݣ�";
	if(man==true)
	cout<<"����Ա"<<endl<<endl;
	else
	cout<<"��ͨ�û�"<<endl<<endl; 
	cout<<"----------------------------"<<endl;
	cout<<"| 1.д����"<<endl;
	cout<<"| 2.������"<<endl;
	cout<<"| 3.������"<<endl;
	cout<<"| 4.uid�����û�"<<endl;
	cout<<"| 5.�û��������û�"<<endl;
	cout<<"| 6.�ǳ�"<<endl;
	cout<<"| 7.ˢ��ʱ��"<<endl;
	cout<<"----------------------------"<<endl;
	time_t now=time(0);
	tm*ltm=localtime(&now);
	cout<<"��ǰʱ�䣺"<<1900+ltm->tm_year;
    cout<<"��"<<1+ltm->tm_mon;
    cout<<"��"<<ltm->tm_mday;
    cout<<"��"<<ltm->tm_hour<<":";
    cout<<ltm->tm_min<<":";
    cout<<ltm->tm_sec<<endl;
	c=getch();
	switch(c){
		case '1' : write();break;
		case '2' : watch(1);break;
		case '3' : super();break;
		case '4' : searchnum();break;
		case '5' : usernamesearch();break;
		case '6' : my="NULL";man=false;cout<<"�ѵǳ����ͣ����ڷ��ص�¼����...";Sleep(3000);system("cls");main();break;
		case '7' : system("cls");index();break;
		default : cout<<"��������ȷ����"<<endl;system("cls");return index();
	}
}
void mark(int x){
	ofstream out("blog num.txt");
	out<<x<<endl;
	out.close();
	return;
}
void write(){
	system("title suyunqiaoKID's blog write-blog");
	null();
	int total=0,num;
	string blog;
	int l;
	system("cls");
	cout<<"�����벩�����ݣ�����submit��Enter�Է���(��ʱ��֧������ո�)"<<endl;
	ofstream out("blog.txt",ios::app);
	ifstream in("blog num.txt");
	in>>num;
	while(cin>>blog){
		if(total==0){
			out<<num+1<<endl;
			out<<my<<endl;
		}
		total++;
		out<<blog<<endl;
		if(blog=="submit")
		break;
	}
	mark(num+1);
	out.close();
	cout<<"�ѷ������ͣ����ڷ�����ҳ..."<<endl;
	Sleep(3000);
	system("cls");
	index();
}
void talk(int x){
	string talk;
	cout<<"�����������͵����۰ȣ�"<<endl;
	cin>>talk;
	ofstream out("talk.txt",ios::app);
	out<<x<<endl;
	out<<my<<endl;
	out<<talk<<endl;
	cout<<"���ͳɹ��������Զ�����ԭ����..."<<endl;
	Sleep(3000);
	watch(x);
}
void watchtalk(int x){
	char c; 
	string talk,name;
	int DATA,n;
	n=x;
	ifstream in("talk.txt");
	while(in>>DATA&&in>>name&&in>>talk){
		if(DATA==x){
			cout<<"�����ߣ�"<<name<<endl;
			cout<<"���ݣ�"<<talk<<endl<<endl;
		}
	}
	 cout<<"����������ز���,��Q������ҳ"<<endl;
	 c=getch();
	 if(c=='q'||c=='Q'){
			cout<<"����Ϊ��������ҳ..."<<endl;
			Sleep(3000);
			system("cls");
			return index();
		}
		else
		watch(x);
	}
bool checknum(int x){
	int num; 
	ifstream in("blog num.txt");
	in>>num;
	if(x>num)
	return false;
	return true;
}
void watch(int x){
	system("title suyunqiaoKID's blog watch-blog");
	null();
	system("cls");
	string username,blog,DATA;
	int l,num;
	char c;
	num=x;
	cout<<"��A�鿴��һƪ����,��D�鿴��һƪ����,��Q������ҳ,��E��������,��W�鿴�ò���������"<<endl;
	ifstream in("blog.txt");
	while(checknum(num)){
		in>>num;
		if(num!=x){
			in>>username;
			while(in>>DATA&&DATA!="submit");
			continue;
		}
		else
		in>>username;
		cout<<"���ߣ�"<<username<<endl;
		cout<<"���ݣ�"<<endl; 
		while(in>>blog&&blog!="submit")
		cout<<blog<<endl;
		cout<<"���ͱ�ţ�"<<num<<endl;
		c=getch();
		if(c=='q'||c=='Q'){
			cout<<"����Ϊ��������ҳ..."<<endl;
			Sleep(3000);
			system("cls");
			return index();
			}
		else if(c=='e'||c=='E'){
			cout<<endl;
			talk(num);
		}
		else if(c=='w'||c=='W'){
			cout<<endl;
			watchtalk(num);
		}
		else if(c=='a'||c=='A'){
			watch(num-1);
		}
		else if(c=='d'||c=='D'){
			watch(num+1);
		}
		else
		cout<<"��������ȷ���ܼ�"<<endl;
		Sleep(3000);
		watch(num);
		}
		cout<<"�Ѿ������һƪ�����ˣ�����Ϊ��������ҳ..."<<endl;
		Sleep(3000);
		system("cls");
		index();
}
void superman(){
	string DATA;
	ifstream in("superman.txt");
	while(in>>DATA){
		if(DATA==my){
			man=true;
			return;
		}
	}
}
void super(){
	null();
	system("cls");
	char c;
	if(man==false){
		cout<<"��û�й���ԱȨ�ޣ��޷����ʴ˽��棬����Ϊ��������ҳ..."<<endl;
		Sleep(3000);
		system("cls");
		return index();
	}
	cout<<"----------------------------"<<endl;
	cout<<"| 1.�鿴���й���Ա"<<endl;
	cout<<"| 2.��ӹ���Ա"<<endl;
	cout<<"| 3.���û����������"<<endl;
	cout<<"| 4.������ҳ"<<endl;
	cout<<"----------------------------"<<endl;
	c=getch();
	switch(c){
		case '1' : watchman();break;
		case '2' : addman();break;
		case '3' : addblack();break;
		case '4' : cout<<"����Ϊ��������ҳ...";Sleep(3000);system("cls");index();
		default : cout<<"��������ȷ����"<<endl;system("cls");return super();
	}
}
void watchman(){
	system("title suyunqiaoKID's blog administrators-list");
	null();
	string DATA;
	int total=0;
	char c;
	ifstream in("superman.txt");
	while(in>>DATA){
		total++;
		cout<<"����Ա��ţ�"<<total<<endl;
		cout<<"�û�����"<<DATA<<endl<<endl;
	}
	cout<<"�����������"<<endl;
	c=getch();
	cout<<"����Ϊ�����ع������..."<<endl;
	Sleep(3000);
	system("cls");
	return super();
}
void addblack(){
	system("title suyunqiaoKID's blog add-blackuser-list");
	string username,DATA,DATA2;
	int num;
	bool tf;
	null();
	ofstream out("blacklist.txt",ios::app);
	ifstream in("user.txt");
	cout<<"��������Ҫ��ӵĺ������û���"<<endl;
	cin>>username;
	while(in>>num&&in>>DATA&&in>>DATA2){
		if(DATA==username){
			tf=true;
			break;
		}
	}
	if(tf==false){
		cout<<"δ���û��б����ҵ�"<<username<<"�û�������Ϊ�����ع������..."<<endl;
		Sleep(3000);
		system("cls");
		return super();
	}
	else{
		if(blacktf(username)){
			out<<username<<endl;
			cout<<"��ӳɹ�������Ϊ�����ع������..."<<endl;
			Sleep(3000);
			system("cls");
			super();
		}
		else{
			cout<<username<<"�û����Ǻ������û�������Ϊ�����ع������..."<<endl;
			Sleep(3000);
			system("cls");
			return super();
		}
	}
}
void addman(){
	system("title suyunqiaoKID's blog add-administrators");
	null();
	string username,DATA1,DATA2;
	int num;
	bool tf=false;
	ofstream out("superman.txt",ios::app);
	ifstream in("user.txt");
	cout<<"��������Ҫ��ӵĹ���Ա�û���"<<endl;
	cin>>username;
	while(in>>num&&in>>DATA1&&in>>DATA2){
		if(DATA1==username){
			tf=true;
			break;
		}
	}
	if(!tf){
		cout<<"δ���û��б����ҵ�"<<username<<"�û�������Ϊ�����ع������..."<<endl;
		Sleep(3000);
		system("cls");
		return super();
	}
	else{
		if(manb(username)){
			out<<username<<endl;
			cout<<"��ӳɹ�������Ϊ�����ع������..."<<endl;
			Sleep(3000);
			system("cls");
			super();
		}
		else{
			cout<<username<<"�û����ǹ���Ա������Ϊ�����ع������..."<<endl;
			Sleep(3000);
			system("cls");
			return super();
		}
	}
}
bool blacktf(string username){
	null();
	string DATA;
	ifstream in("blacklist.txt");
	while(in>>DATA){
		if(username==DATA)
		return false;
	}
	return true;
}
bool manb(string username){
	null();
	string DATA;
	ifstream in("superman.txt");
	while(in>>DATA){
		if(username==DATA)
		return false;
	}
	return true;
}
void null(){
	string blackuser;
	ifstream in("blacklist.txt");
	while(in>>blackuser)
	if(my==blackuser){
		cout<<"�˺�״̬�쳣�������µ�¼��"<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
}
