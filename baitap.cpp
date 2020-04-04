#include<iostream>
using namespace std;
void baitap1()
{
	int a, b, c, max ;
    cout << "Nhap a = ";cin >> a;
    cout << "Nhap b = ";cin >> b;
    cout << "Nhap c = ";cin >> c;
    max = a;
    if(max < b)
	{
        max = b;
    }
    if(max < c)
	{
        max=c; 
    }
    cout << "So lon nhat trong 3 so la: " << max<<endl;
}
void baitap2()
{
	int tong = 0;
	int i = 0;
	while(i < 20)
	{
		tong += i;
		i++;
	}
	cout<<"Tong = "<<tong<<endl;
	cout<<"i = "<<i<<endl;
}
void baitap3()
{
	int a[10];
	int demchan = 0;
	int demle = 0;
	cout<<"Nhap vao 10 so nguyen: ";
	for(int i = 0;i < 10;i++ )
		{
			cin>>a[i];
		}
	for(int i = 0;i < 10 ;i++)
	{
		if(a[i]%2==0)
			{
				demchan++;
			}
		else
			{
				demle++;
			}
	}
	cout<<"So chan la: "<<demchan<<endl;
	cout<<"So le la: "<<demle<<endl;
}
void baitap4()
{
	int n, x;
	int dem=0;
	cout<<"So phan tu mang = ";cin>>n;
	int a[n];
	cout<<"Nhap doi tuong vao mang: ";
	for(int i = 0;i < n;i++)
	{
		cin>>a[i];
	}
	cout<<"Gia tri can tim = ";cin>>x;
	for(int i = 0;i < n;i++)
	{
		
		if(a[i]==x)
			cout<<"Da tim thay x";
		else
			dem++;
	}
	if(dem > 0)
	{
			cout<<"Khong tim thay";
	}
}
int main()
{
	int baitap;
	cout<<"Bai tap 1: \n\tCho 3 so nguyen a, b, c. Tim so lon nhat trong 3 so da cho."<<endl;
	cout<<"Bai tap 2: \n\tBuoc 1:\n\t\tGan tong = 0, gan i = 0\n\tBuoc 2:\n\t\tGan tong=tong + i\n\t\tTang i them 1 don vi\n\tBuoc 3: So sanh i voi 20\n\t\tNeu i < 20 thi quay lai buoc 2"<<endl;
	cout<<"Bai tap 3: \n\tCho nhap lieu 1 tap 10 so nguyen bat ki, hay viet giai thuat \n\txac sinh trong 10 so nguyen nhap vao, co bao nhieu so chan, \n\tbao nhieu so le."<<endl;
	cout<<"Bai tap 4: \n\tCho n doi tuong va mot gia tri x bat ki. Yeu cau tim kiem x trong n doi tuong tren."<<endl;
	do
	{
		cout<<"\n\t\t\t\tNhap bai tap muon xem: ";cin>>baitap;
		switch(baitap)
		{
			case 1:
				baitap1();
				break;
			case 2:
				baitap2();
				break;
			case 3:
				baitap3();
				break;
			case 4:
				baitap4();
				break;
			default:
				cout<<"Moi nhap lai bai tap muon xem!!!"<<endl;
				break;
		}
	}while(baitap!=4);
	return 0;
}
