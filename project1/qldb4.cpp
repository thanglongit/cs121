#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define MAX 200
string ten[MAX];
string sdt[MAX];
string email[MAX];
int N;
//Khai bao ham nguyen mau
void Them(string ten[],string sdt[],string email[]);
void Hienthi(string ten[],string sdt[],string email[]);
void Sua(string ten[],string sdt[],string email[]);
void Xoa(string ten[],string sdt[],string email[]);
void Tim(string ten[],string sdt[],string email[]);
void Thoat(string ten[],string sdt[],string email[]);
//====================================================
int main(){	
	N = 0; //Mac dinh khi khoi dong khong co nguoi nao trong danh ba
	/*Doc du lieu tu file danhba4.txt*/
	fstream fin("danhba4.txt");
	fin>>N;
	char temp[100];
	fin.getline(temp,100);
	for(int i=0;i<N;i++){
		getline(fin,ten[i]);
		getline(fin,sdt[i]);
		getline(fin,email[i]);
	}
	fin.close();//Ket thuc
	//-------------------------------
	/*Xu ly menu*/
	int chon;
	do{
		cout<<"\tPhan Mem Quan Ly Danh Ba - Version 4.1.8 - Update by Le Anh Duc (A36000)\n";
		cout<<endl;
		cout<<"1. Them lien he"<<endl;
		cout<<"2. Hien thi toan bo danh ba"<<endl;
		cout<<"3. Sua lien he"<<endl;
		cout<<"4. Xoa lien he"<<endl;
		cout<<"5. Tim lien he"<<endl;
		cout<<"0. Thoat"<<endl;
		cout<<"=> Moi chon chuc nang: ";		
		cin>>chon;
		cout<<"========================="<<endl;//Phan cach
		/*Xu ly sau khi chon*/
		if(chon==1){//Them lien he
			Them(ten,sdt,email);
		}
		//-------------------------------
		else if(chon==2){//Hien thi toan bo danh ba
			Hienthi(ten,sdt,email);
		}
		//-------------------------------
		else if(chon==3){//Sua lien he
			Sua(ten,sdt,email);
		}
		//-------------------------------
		else if(chon==4){//Xoa lien he
			Xoa(ten,sdt,email);
		}
		//-------------------------------
		else if(chon==5){//Tim lien he
			Tim(ten,sdt,email);
		}
		//-------------------------------
		else if(chon==0){//Thoat va luu thay doi
			Thoat(ten,sdt,email);
		}
		//-------------------------------
		if(chon!=0){//Neu chon #0 va sau khi thuc hien xong thì quay ve menu chon
			cout<<endl;
			cout<<"========================="<<endl;
			cout<<"=> Nhan Enter de tro ve !";
			cin.ignore();//Doc va loai bo ki tu con trong bo nho dem
			cin.get();//Giu ky tu Enter trong bo nho dem
			system("clear");//Xoa
		}	
	}
	while(chon!=0);//Neu chon #0 thì lap lai
	return 0;
}
//====================================================
//Dinh nghia ham
void Them(string ten[],string sdt[],string email[]){
	cout<<"\t\tThem lien he\n";
	cout<<endl;
	cout<<"Xim moi nhap ho va ten: ";
	cin.ignore();
	getline(cin,ten[N]);
      cout<<"Xin moi nhap so dien thoai: ";
	getline(cin,sdt[N]);
	cout<<"Xin moi nhap dia chi email: ";
	getline(cin,email[N]);
	N++;
}
//----------------------------------------------------
void Hienthi(string ten[],string sdt[],string email[]){
	cout<<"\t\tToan bo danh ba\n";
	cout<<endl;
	cout<<"Stt\tHo va ten\t\tSo dien thoai\t\tEmail\n";
	cout<<endl;
	for(int i=0;i<N;i++){
		cout<<i+1<<"\t"<<ten[i]<<"\t\t"<<sdt[i]<<"\t\t"<<email[i]<<endl;
	}	
}
//----------------------------------------------------
void Sua(string ten[],string sdt[],string email[]){
	cout<<"\t\tSua lien he\n";
	cout<<endl;
	cin.ignore();
	string changeName;
	string newName, newPhone, newEmail;
	cout<<"=> Xin moi nhap ten lien he can sua: ";
	getline(cin,changeName);
	cout<<endl;
	bool check=0;
	for(int i=0;i<N;i++){
		if(ten[i]==changeName){
			cout<<"Xin moi nhap ten moi: ";
			getline(cin,newName);
			ten[i]=newName;
			cout<<"Xin moi nhap so dien thoai moi: ";
			getline(cin,newPhone);
			sdt[i]=newPhone;
			cout<<"Xin moi nhap email moi: ";
			getline(cin,newEmail);
			email[i]=newEmail;
			check=1;
		}
	}
	if(check==0){
		cout<<"\t\tLien he khong ton tai. Vui long thu lai !"<<endl;
	}
}
//----------------------------------------------------
void Xoa(string ten[],string sdt[],string email[]){
	cout<<"\t\tXoa lien he\n";
	cout<<endl;
	cin.ignore();
	string deleteName;
	cout<<"=> Xin moi nhap ten lien he can xoa: ";
	getline(cin,deleteName);
	cout<<endl;
	bool check=0;
	for(int i=0;i<N;i++){
		if(ten[i]==deleteName){
			cout<<"\t\tDa xoa lien he thanh cong !"<<endl;
			for(i;i<N-1;i++){//Chay den N-1 vi xoa 1 lien he
				ten[i]=ten[i+1];//Day ten o duoi len vi tri ten can xoa (xoa)
				sdt[i]=sdt[i+1];//Day sdt o duoi len vi tri sdt can xoa (xoa)
				email[i]=email[i+1];//Day email o duoi len vi tri email can xoa (xoa)
			}
			N--;//Dem
			check=1;
		}					
	}
	if(check==0){
		cout<<"\t\tLien he khong ton tai. Vui long thu lai !"<<endl;
	}
}
//----------------------------------------------------
void Tim(string ten[],string sdt[],string email[]){
	cout<<"\t\tTim lien he\n";
	cout<<endl;
	cin.ignore();//Doc va loai bo ky tu trong bo nho dem
	string findName;//Khoi tao chuoi ten
	cout<<"=> Xin moi nhap ten can tim: ";
	getline(cin,findName);//Chuoi ki tu nhap vao gan cho bien findName
	cout<<endl;
	bool check=0;//kiem tra sai
	for(int i=0;i<N;i++){
		if(ten[i]==findName){//Neu ten trong mang trung chuoi nhap vao thi in ra sdt tuong ung
			cout<<"\t\tKet qua tim kiem cho: "<<findName<<endl;
			cout<<endl;
			cout<<"Stt\tHo va ten\t\tSo dien thoai\t\tEmail\n";
			cout<<endl;
			cout<<i+1<<"\t"<<ten[i]<<"\t\t"<<sdt[i]<<"\t\t"<<email[i]<<endl;
			check=1;//Kiem tra dung
		}
	}
	if(check==0){//Neu kiem tra sai
		cout<<"\t\tLien he khong ton tai. Vui long thu lai !"<<endl;
	}
}
//----------------------------------------------------
void Thoat(string ten[],string sdt[],string email[]){
	/*Luu du lieu xuong file danhba4.txt*/
	ofstream fout("danhba4.txt");
	fout<<N<<endl;
	for(int i=0;i<N;i++){
		fout<<ten[i]<<endl<<sdt[i]<<endl<<email[i]<<endl;
	}
	fout.close();
}
//====================================================
