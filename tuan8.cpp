#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
using namespace std;

class SV
{
private:
	string hoten;
	int mssv;
	
protected:
	float diemTKLG, diemVDK, diemCTMT;
public:
	static int siso;
	string cate;
	SV()
	{
		
	}
	
	SV(int mssv, string hoten, float diemTKLG, float diemVDK, float diemCTMT)
	{
		this->mssv = mssv;
		this->hoten = hoten;
		this->diemTKLG = diemTKLG;
		this->diemVDK = diemVDK;
		this->diemCTMT = diemCTMT;
	}
	

	static void Siso()
	{
		cout << "Si so lop hien tai:" << siso << endl;
		system("pause");
	}

	virtual void Nhap()
	{
		cout << "Nhap thong tin sinh vien thu: "<< siso << ":" << endl;
		cout << "Nhap mssv: ";
		cin >> mssv;
		cin.ignore();
		cout << "Nhap ten: ";
		getline(cin,hoten);
		cout << "Nhap diem TKLG: ";
		cin >> diemTKLG;
		cout << "Nhap diem VDK: ";
		cin >> diemVDK;
		cout << "Nhap diem CTMT: ";
		cin >> diemCTMT;
	}

	void setMSSV(int mssv)
	{
	    this->mssv = mssv;
	}

	int getMSSV()
	{
	    return mssv;
	}

	void setHoten(string hoten)
	{
	    this->hoten = hoten;
	}

	string getHoten()
	{
	    return hoten;
	}

	float getDTB()
	{
		return (diemTKLG+diemVDK+diemCTMT)/3;
	}

	void setTKLG(float diemTKLG)
	{
	    this->diemTKLG = diemTKLG;
	}

	void setVDK(float diemVDK)
	{
	    this->diemVDK = diemVDK;
	}

	void setCTMT(float diemCTMT)
	{
	    this->diemCTMT = diemCTMT;
	}

	float getTKLG()
	{
		return diemTKLG;
	}

	float getVDK()
	{
		return diemVDK;
	}

	float getCTMT()
	{
		return diemCTMT;
	}

	virtual void Xuat()
	{
		cout << left << setw(5)  << siso << left << setw(10)  << mssv << setw(10) << left << hoten << setw(30) << right << cate << setw(10) << diemTKLG << setw(10) << diemVDK << setw(10) << diemCTMT;
	}
};

class CLC : public SV
{
private:
	float diemOOP,diemDSP,diemTTS;
public:
	CLC()
	{
	}
	CLC (int mssv, string hoten, float diemTKLG, float diemVDK, float diemCTMT, float diemOOP, float diemDSP, float diemTTS) : SV (mssv, hoten,diemTKLG, diemVDK, diemCTMT)
	{
		this->diemOOP = diemOOP;
		this->diemDSP = diemDSP;
		this->diemTTS = diemTTS;
	}
	void Nhap()
	{
		SV::Nhap();
		cout << "Nhap diem OOP: ";
		cin >> diemOOP;
		cout << "Nhap diem DSP: ";
		cin >> diemDSP;
		cout << "Nhap diem TTS: ";
		cin >> diemTTS;
		siso++;
	}
	void setOOP(float diemOOP)
	{
	    this->diemOOP = diemOOP;
	}

	void setDSP(float diemDSP)
	{
	    this->diemDSP = diemDSP;
	}

	void setTTS(float diemTTS)
	{
	    this->diemTTS = diemTTS;
	}

	float getOOP()
	{
		return diemOOP;
	}

	float getDSP()
	{
		return diemDSP;
	}

	float getTTS()
	{
		return diemTTS;
	}

	float getDTB()
	{
		return (diemTKLG+diemVDK+diemCTMT+diemOOP+diemDSP+diemTTS)/6;
	}

	void Xuat()
	{
		SV::Xuat();
		cout << setw(10) << diemOOP << setw(10) << diemDSP << setw(10) << diemTTS << setw(10) << " " << setw(10) << " " << setw(10) << setprecision(3) << getDTB()<< "\n";
		siso++;
	}

};

class CQ : public SV
{
private:
	float diemJAVA,diemDATABASE;
public:
	CQ()
	{
	}
	CQ (int mssv, string hoten, float diemTKLG, float diemVDK, float diemCTMT, float diemJAVA, float diemDATABASE) : SV (mssv, hoten,diemTKLG, diemVDK, diemCTMT)
	{
		this->diemJAVA = diemJAVA;
		this->diemDATABASE = diemDATABASE;
	}
	void Nhap()
	{
		SV::Nhap();
		cout << "Nhap diem JAVA: ";
		cin >> diemJAVA;
		cout << "Nhap diem DATABASE: ";
		cin >> diemDATABASE;
		siso++;
	}
	void setJAVA(float diemJAVA)
	{
	    this->diemJAVA = diemJAVA;
	}

	void setDATABASE(float diemDATABASE)
	{
	    this->diemDATABASE = diemDATABASE;
	}

	float getJAVA()
	{
		return diemJAVA;
	}

	float getDATABASE()
	{
		return diemDATABASE;
	}

	float getDTB()
	{
		return (diemTKLG+diemVDK+diemCTMT+(diemJAVA*2)+(diemDATABASE*2))/7;
	}

	void Xuat()
	{
		SV::Xuat();
		cout << setw(10) << " " << setw(10) << " " << setw(10) << " " << setw(10) << diemJAVA << setw(10) << diemDATABASE << setw(10) << setprecision(3) << getDTB() << "\n";
		siso++;
	}
};

int SV::siso = 0;

class Menu
{
private:
	vector <SV*> sv;
	int n,m;
public:
	Menu()
	{
		int chon;
		do
		{
			system("cls");
			cout << "1. Nhap danh sach sinh vien\n";
			cout << "2. Hien danh sach sinh vien\n";
			cout << "3. Chinh sua thong tin sinh vien\n";
			cout << "4. Tim kiem sinh vien co DTB cao nhat thap nhat\n";
			cout << "5. Them sinh vien vao danh sach\n";
			cout << "6. Sap xep danh sach sao cho DTB giam dan\n";
			cout << "7. Sap xep danh sach sao cho MSSV tang dan\n";
			cout << "0. Thoat\n";
			cout << "Chon muc so: ";
			cin >> chon;

			switch(chon)
			{
			case 1:
				{
					NhapDS();
				}
				break;
			case 2:
				{
					XuatDS();
					system("pause");
				}
				break;
			case 3:
				{
					ChinhsuaDS();
				}
				break;
			case 4:
				{
					TBcaothap();
				}
				break;
			case 5:
				{
					Insert();
				}
				break;
			case 6:
				{
					SapxepDTB();
				}
				break;
			case 7:
				{
					SapxepMSSV();
				}
				break;
			default:
				{
					cout << "Invalid input, please enter the right number!\n";
					system("pause");
				}
				break;
			}
		}
		while(chon!=0);
	}
	
	void Insert()
	{
		string hoten;
		int mssv;
		float diemTKLG, diemVDK, diemCTMT;
		int he;
		int s;
		s = sv.size()+1;
		sv.resize(s);
		cout << "Nhap thong tin sinh vien thu: "<< SV::siso << ":" << endl;
		cout << "Nhap mssv: ";
		cin >> mssv;
		cin.ignore();
		cout << "Nhap ten: ";
		getline(cin,hoten);
		cout << "Nhap diem TKLG: ";
		cin >> diemTKLG;
		cout << "Nhap diem VDK: ";
		cin >> diemVDK;
		cout << "Nhap diem CTMT: ";
		cin >> diemCTMT;
		cout << "Nhap he dao tao: \n\t1. CLC\n\t2. CQ\n";
		cin >> he;
		if (he==1)
		{
			
			float diemOOP,diemDSP,diemTTS;
			cout << "Nhap diem OOP: ";
			cin >> diemOOP;
			cout << "Nhap diem DSP: ";
			cin >> diemDSP;
			cout << "Nhap diem TTS: ";
			cin >> diemTTS;
			sv[s-1] = new CLC (mssv, hoten,diemTKLG, diemVDK, diemCTMT, diemOOP, diemDSP, diemTTS);
			sv[s-1]->cate = "CLC";
		}
		else
		{
			float diemJAVA,diemDATABASE;
			cout << "Nhap diem JAVA: ";
			cin >> diemJAVA;
			cout << "Nhap diem DATABASE: ";
			cin >> diemDATABASE;
			sv[s-1] = new CQ (mssv, hoten,diemTKLG, diemVDK, diemCTMT, diemJAVA, diemDATABASE);
			sv[s-1]->cate = "CQ";
		}
	}
	
	void TBcaothap()
	{
		int chon3;
		cout << "1. Sinh vien co diem trung binh thap nhat\n";
		cout << "2. Sinh vien co diem trung binh cao nhat\n";
		cout << "Nhap lua chon:";
		cin >> chon3;
		if (chon3 == 1)
		{
			dtbMin();
		}
		else
		{
			if (chon3 == 2)
			{
				dtbMax();
			}
		}
	}

	void dtbMin()
	{
		float min = sv[0]->getDTB();
		cout << "Sinh vien co DTB thap nhat: \n";
		cout << left << setw(5)  << "STT" << left << setw(10)  << "MSSV" << setw(10) << left << "Ho va ten"<< setw(30) << right << "He" << setw(10) << "TKLG" << setw(10) << "VDK" << setw(10) << "KTMT" << setw(10) << "OOP" << setw(10) << "DSP" << setw(10) << "TTS" << setw(10) << "JAVA" << setw(10) << "CSDL" << setw(10) << "DTB" <<"\n";
		for(int i=0; i<sv.size(); i++)
		{
			if (min>sv[i]->getDTB())
			{
				min=sv[i]->getDTB();
			}
		}
		for (int i = 0; i<sv.size(); i++)
		{
			if (sv[i]->getDTB()==min)
			{
				sv[i]->Xuat();
			}
		}
		system("pause");
	}

	void dtbMax()
	{
		float max = sv[0]->getDTB();
		cout << "Sinh vien co DTB thap nhat: \n";
		cout << left << setw(5)  << "STT" << left << setw(10)  << "MSSV" << setw(10) << left << "Ho va ten"<< setw(30) << right << "He" << setw(10) << "TKLG" << setw(10) << "VDK" << setw(10) << "KTMT" << setw(10) << "OOP" << setw(10) << "DSP" << setw(10) << "TTS" << setw(10) << "JAVA" << setw(10) << "CSDL" << setw(10) << "DTB" <<"\n";
		for(int i=0; i<sv.size(); i++)
		{
			if (max<sv[i]->getDTB())
			{
				max=sv[i]->getDTB();
			}
		}
		for (int i = 0; i<sv.size(); i++)
		{
			if (sv[i]->getDTB()==max)
			{
				sv[i]->Xuat();
				
			}
		}
		system("pause");
	}

	void ChinhsuaDS()
	{
		int i;
		int chon2;
		do
		{
			XuatDS();
			cout << "Nhap STT sinh vien muon chinh sua:";
			cin >> i;
		}
		while(i>sv.size());
		cout << "Nhung thong tin co the sua:\n\t1. MSSV\n\t2. Ho va ten\n\t3. TKLG\n\t4. VDK\n\t5. CTMT\n\t6. OOP\n\t7. DSP\n\t8. TTS\n\t9. JAVA\n\t10. CSDL\n";
		cout << "Chon thong tin can sua: ";
		cin >> chon2;
		switch (chon2)
		{
		case 1:
			{
				int mssv;
				cout << "Nhap MSSV: ";
				cin >> mssv;
				sv[i]->setMSSV(mssv);
			}
			break;
		case 2:
			{
				string hoten;
				cout << "Nhap ten: ";
				cin.ignore();
				getline(cin,hoten);
				sv[i]->setHoten(hoten);
			}
			break;
		case 3:
			{
				float diemTKLG;
				cout << "Nhap diem TKLG: ";
				cin >> diemTKLG;
				sv[i]->setTKLG(diemTKLG);
			}
			break;
		case 4:
			{
				float diemVDK;
				cout << "Nhap diem VDK: ";
				cin >> diemVDK;
				sv[i]->setVDK(diemVDK);
			}
			break;
		case 5:
			{
				float diemCTMT;
				cout << "Nhap diem CTMT: ";
				cin >> diemCTMT;
				sv[i]->setCTMT(diemCTMT);
			}
			break;
		case 6:
			{
				if (sv[i]->cate=="CLC")
				{
					CLC* clc = (CLC*)sv[i];
					float diemOOP;
					cout << "Nhap diem OOP: ";
					cin >> diemOOP;
					clc->setOOP(diemOOP);
				}
				else 
				{
					cout << "Day la he CLC !" << "\n";
					system("pause");
				}
			}
			break;
		case 7:
			{
				if (sv[i]->cate=="CLC")
				{
					CLC* clc = (CLC*)sv[i];
					float diemDSP;
					cout << "Nhap diem DSP: ";
					cin >> diemDSP;
					clc->setDSP(diemDSP);
				}
				else 
				{
					cout << "Day la he CLC !" << "\n";
					system("pause");
				}
			}
			break;
		case 8:
			{
				if (sv[i]->cate=="CLC")
				{
					CLC* clc = (CLC*)sv[i];
					float diemTTS;
					cout << "Nhap diem TTS: ";
					cin >> diemTTS;
					clc->setTTS(diemTTS);
				}
				else 
				{
					cout << "Day la he CLC !" << "\n";
					system("pause");
				}
			}
			break;
		case 9:
			{
				if (sv[i]->cate=="CQ")
				{
					CQ* cq = (CQ*)sv[i];
					float diemJAVA;
					cout << "Nhap diem JAVA: ";
					cin >> diemJAVA;
					cq->setJAVA(diemJAVA);
				}
				else 
				{
					cout << "Day la he CQ !" << "\n";
					system("pause");
				}
			}
			break;
		case 10:
			{
				if (sv[i]->cate=="CQ")
				{
					CQ* cq = (CQ*)sv[i];
					float diemDATABASE;
					cout << "Nhap diem CSDL: ";
					cin >> diemDATABASE;
					cq->setDATABASE(diemDATABASE);
				}
				else 
				{
					cout << "Day la he CQ !" << "\n";
					system("pause");
				}
			}
			break;
		default:
			{
				cout << "Invalid input, please enter the right number!\n";
				system("pause");
			}
		}
	}
	
	void SapxepDTB()
	{
		cout << "Sinh vien theo DTB tu cao xuong thap: \n";
		cout << left << setw(5)  << "STT" << left << setw(10)  << "MSSV" << setw(10) << left << "Ho va ten"<< setw(30) << right << "He" << setw(10) << "TKLG" << setw(10) << "VDK" << setw(10) << "KTMT" << setw(10) << "OOP" << setw(10) << "DSP" << setw(10) << "TTS" << setw(10) << "JAVA" << setw(10) << "CSDL" << setw(10) << "DTB" <<"\n";
		for(int i=0; i<sv.size()-1; i++)
		{
			for (int j=i+1; j<sv.size(); j++)
			{
				if (sv[i]->getDTB()<sv[j]->getDTB())
				{
					swap(sv[i],sv[j]);
				}
			}
		}
		for (int i = 0; i<sv.size(); i++)
		{
			sv[i]->Xuat();
		}
		system("pause");
	}

	void SapxepMSSV()
	{
		cout << "Sinh vien theo MSSV tu thap len cao: \n";
		cout << left << setw(5)  << "STT" << left << setw(10)  << "MSSV" << setw(10) << left << "Ho va ten"<< setw(30) << right << "He" << setw(10) << "TKLG" << setw(10) << "VDK" << setw(10) << "KTMT" << setw(10) << "OOP" << setw(10) << "DSP" << setw(10) << "TTS" << setw(10) << "JAVA" << setw(10) << "CSDL" << setw(10) << "DTB" <<"\n";
		for(int i=0; i<sv.size()-1; i++)
		{
			for (int j=i+1; j<sv.size(); j++)
			{
				if (sv[i]->getMSSV()>sv[j]->getMSSV())
				{
					swap(sv[i],sv[j]);
				}
			}
		}
		for (int i = 0; i<sv.size(); i++)
		{
			sv[i]->Xuat();
			
		}
		system("pause");
	}
	
	void NhapDS()
	{
		cout << "Nhap so luong sinh vien CLC: ";
		cin >> n;
		cout << "Nhap so luong sinh vien CQ: ";
		cin >> m;
		sv.resize(n+m);

		for (int i = 0; i<n; i++)
		{
			sv[i] = new CLC;
			sv[i]->cate = "CLC";
		}
		for (int i = n; i<=n+m-1; i++)
		{
			sv[i] = new CQ;
			sv[i]->cate = "CQ";
		}
		for (int i = 0; i<sv.size(); i++)
		{
			sv[i]->Nhap();
		}
		SV::siso=0;
	}
		
	
	void XuatDS()
	{
		cout << left << setw(5)  << "STT" << left << setw(10)  << "MSSV" << setw(10) << left << "Ho va ten"<< setw(30) << right << "He" << setw(10) << "TKLG" << setw(10) << "VDK" << setw(10) << "KTMT" << setw(10) << "OOP" << setw(10) << "DSP" << setw(10) << "TTS" << setw(10) << "JAVA" << setw(10) << "CSDL" << setw(10) << "DTB" <<"\n";
		SV::siso=0;
		for (int i = 0; i<sv.size(); i++)
		{
			sv[i]->Xuat();
		}
		SV::siso=sv.size();
	}
	
	~Menu()
	{
		for (int i = 0; i<sv.size(); i++)
		{
			delete sv[i];
		}
	}
};



void main()
{
	Menu menu;
}