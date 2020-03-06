#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<string>
#define USER 200
#define SOUND 100
#define ANSWER 300
#define QUESTION 500
using namespace std;
string HoTen[USER];
string NgheNghiep[USER];
string QueQuan[USER];
string CauHoi[QUESTION];
string DapAnA[ANSWER];
string DapAnB[ANSWER];
string DapAnC[ANSWER];
string DapAnD[ANSWER];
string DapAnDung[ANSWER];
string RepTrueSound[SOUND];
string ReadSound[SOUND];
string TraLoiCauHoi;
string Reply;
string Enter;
string Cmd;
int SoAmThanhTraLoiDung;
int SoAmThanhCauHoi;
int SoNguoiChoi;
int SoCauHoi;
//Khai bao ham nguyen mau
void NguoiChoi(string HoTen[],string NgheNghiep[],string QueQuan[]);
void DocNguoiChoi(string HoTen[],string NgheNghiep[],string QueQuan[]);
void LuuNguoiChoi(string HoTen[],string NgheNghiep[],string QueQuan[]);
void DocCauHoi(string CauHoi[],string DapAnA[],string DapAnB[],string DapAnC[],string DapAnD[],string DapAnDung[]);
void SanSang(string HoTen[],string QueQuan[]);
void AmThanhCauTraLoi();
void AmThanhCauHoi();
void BatDau(string Reply);
void Command1(int i);
void Command2(int i);
//====================================================
int main(){
	DocNguoiChoi(HoTen,NgheNghiep,QueQuan);
	NguoiChoi(HoTen,NgheNghiep,QueQuan);
	LuuNguoiChoi(HoTen,NgheNghiep,QueQuan);
	SanSang(HoTen,QueQuan);
	BatDau(Reply);
	return 0;
}
//====================================================
//Dinh nghia ham - Nguoi choi
void NguoiChoi(string HoTen[],string NgheNghiep[],string QueQuan[]){
	cout<<"\t\tChao mung quy vi da den voi chuong trinh Ai La Trieu Phu (Enter)";
	system("canberra-gtk-play -f start.wav");
	getline(cin,Enter);
	system("canberra-gtk-play -f chaomung.wav");
	cout<<endl;
	cout<<"Xin moi ban gioi thieu doi chut ve ban than minh: "<<endl;
	cout<<"- Ho va ten: ";
	getline(cin,HoTen[SoNguoiChoi]);
	cout<<"- Nghe nghiep: ";
	getline(cin,NgheNghiep[SoNguoiChoi]);
	cout<<"- Que Quan: ";
	getline(cin,QueQuan[SoNguoiChoi]);
	SoNguoiChoi++;
}
//------------------------------
void DocNguoiChoi(string Hoten[],string NgheNghiep[],string QueQuan[]){
	//Doc du lieu tu file nguoichoi.txt
	SoNguoiChoi=0;
	fstream fin("nguoichoi.txt");
	fin>>SoNguoiChoi;
	char temp[100];
	fin.getline(temp,100);
	for(int i=0;i<SoNguoiChoi;i++){
		getline(fin,HoTen[i]);
		getline(fin,NgheNghiep[i]);
		getline(fin,QueQuan[i]);
	}
	fin.close();
}
//------------------------------
void LuuNguoiChoi(string HoTen[],string NgheNghiep[],string QueQuan[]){
	/*Luu du lieu xuong file nguoichoi.txt*/
	ofstream fout("nguoichoi.txt");
	fout<<SoNguoiChoi<<endl;
	for(int i=0;i<SoNguoiChoi;i++){
		fout<<HoTen[i]<<endl<<NgheNghiep[i]<<endl<<QueQuan[i]<<endl;
	}
	fout.close();
}
//====================================================
//Dinh nghia ham - Cau hoi va dap an
void DocCauHoi(string CauHoi[],string DapAnA[],string DapAnB[],string DapAnC[],string DapAnD[],string DapAnDung[]){
	//Doc du lieu tu file cauhoi.txt
	SoCauHoi=15;
	fstream fin("cauhoi.txt");
	fin>>SoCauHoi;
	char temp[100];
	fin.getline(temp,100);
	for(int i=0;i<SoCauHoi;i++){
		//Doc tu file in vao mang
		getline(fin,CauHoi[i]);
		getline(fin,DapAnA[i]);
		getline(fin,DapAnB[i]);
		getline(fin,DapAnC[i]);
		getline(fin,DapAnD[i]);
		getline(fin,DapAnDung[i]);
		//In cau hoi ra man hinh
		cout<<CauHoi[i]<<endl;
		cout<<endl;
		cout<<DapAnA[i]<<"\t\t\t\t"<<DapAnB[i]<<endl;
		cout<<DapAnC[i]<<"\t\t\t\t"<<DapAnD[i]<<endl;
		cout<<endl;
		AmThanhCauHoi();
		Command1(i);
		cout<<"=> Cau tra loi cuoi cung cua ban la: ";
		getline(cin,TraLoiCauHoi);
		if(TraLoiCauHoi[0]==DapAnDung[i][0]||DapAnDung[i][0]==TraLoiCauHoi[0]-32){
			AmThanhCauTraLoi();
			Command2(i);
			//cout<<"=> Do la cau cau tra loi dung !"<<endl;
			system("clear");
		}
		else{
			system("canberra-gtk-play -f repfalse.wav");
			system("canberra-gtk-play -f xinchao.wav");
			//cout<<"=> Do la cau tra loi sai, rat tieng ban da phai dung cuoc choi o day !"<<endl;
			exit(0);
		}
	}
	fin.close();
}
//====================================================
//Dinh nghia ham - san sang va bat dau choi
void SanSang(string HoTen[],string QueQuan[]){
	system("clear");
	cout<<"=> Nguoi choi cua chung ta, ban "<<HoTen[SoNguoiChoi-1]<<" den tu "<<QueQuan[SoNguoiChoi-1]<<" !";
	getline(cin,Enter);
	system("canberra-gtk-play -f luatchoi.wav");
	/*cout<<"=> Co tat ca 15 cau hoi dang doi ban !";
	getline(cin,Enter);
	cout<<"=> Co 3 moc cau hoi quan trong ban can vuot qua do la: ";
	getline(cin,Enter);
	cout<<"\t\t=> 5 <=";
	getline(cin,Enter);
	cout<<"\t\t=> 10 <=";
	getline(cin,Enter);
	cout<<"\t\t=> 15 <=";
	getline(cin,Enter);*/
}
//------------------------------
void BatDau(string Reply){
	system("clear");
	char y,n;
	cout<<"=> Ban da san sang choi chua ? (y/n) - ";
	getline(cin,Reply);
	if(Reply=="y"){
		system("canberra-gtk-play -f sansang.wav");
		cout<<"=> Nguoi choi da san sang va chung ta bat dau di tim ai la trieu phu !";
		getline(cin,Enter);
		system("clear");
		DocCauHoi(CauHoi,DapAnA,DapAnB,DapAnC,DapAnD,DapAnDung);
	}
	else if(Reply=="n"){
		cout<<"=> HaizZz !!!"<<endl;
	}
	else{
		cout<<"=> Nhap sai roi ban oi !"<<endl;
	}
}
//====================================================
//Am thanh phan cau hoi
void AmThanhCauHoi(){
	SoAmThanhCauHoi=15;
	fstream fin("readsound.txt");
	fin>>SoAmThanhCauHoi;
	char temp[100];
	fin.getline(temp,100);
	for(int i=0;i<SoAmThanhCauHoi;i++){
		getline(fin,ReadSound[i]);
	}
	fin.close();
}
void Command1(int i){
	string Cmd="canberra-gtk-play -f ";
	Cmd+=ReadSound[i];
	char Comd[100]={};
	for(int j=0;j<100;j++){
		Comd[j]='\0';
	}
	for(int j=0;j<Cmd.size();j++){
		Comd[j]=Cmd.at(j);
	}
	system(Comd);
}
//Am thanh tra loi dung
void AmThanhCauTraLoi(){
	SoAmThanhTraLoiDung=15;
	fstream fin("reptruesound.txt");
	fin>>SoAmThanhTraLoiDung;
	char temp[100];
	fin.getline(temp,100);
	for(int i=0;i<SoAmThanhTraLoiDung;i++){
		getline(fin,RepTrueSound[i]);
	}
	fin.close();
}
void Command2(int i){
	string Cmd="canberra-gtk-play -f ";
	Cmd+=RepTrueSound[i];
	char Comd[100]={};
	for(int j=0;j<100;j++){
		Comd[j]='\0';
	}
	for(int j=0;j<Cmd.size();j++){
		Comd[j]=Cmd.at(j);
	}
	system(Comd);
}
//====================================================
