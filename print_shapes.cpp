//بهاره دهقانی
//مینی پروژه درس مبانی کامپیوتر و برنامه سازی
//1400.09.06
// استاد درس :دکتر مهدی یزدیان دهکردی
// ايجاد اشكال مختلف هندسي
//تكميل شده
#include <iostream>
#include <windows.h>
using namespace std;
//-------------------------------------------------
void menu();
//این تابع منو را نمایش می دهد
void setting (bool &b, char &c);
//این تابع منو را نمایش می دهد
void change_color();
//اين تابع رنگ پس زمينه را تغيير ميدهد
void print_circle(int r, char c, bool b);
//***این تابع دایره به شعاع مشخص شده چاپ میکند***
void print_solid_circle(int r, char c);
//این تابع دایره ای توپر به شعاع مشخص شده چاپ میکند
void print_empty_circle(int r, char c);
//این تابع دایره ای تو خالی به شعاع مشخص شده چاپ میکند
void print_hozrizonatel_line(int length, char c);
//***این تابع خط افقی به طول مشخص شده چاپ میکند***
void print_vertical_line(int length, char c);
//***این تابع خط عمودی به طول مشخص شده چاپ میکند***
void print_square(int length, char c, bool b);
//***اين تابع مربع به طول مشخص شده چاپ ميكند***
void print_solid_square(int length, char c);
//اين تابع مربع تو پر به طول مشخص شده چاپ ميكند
void print_empty_square(int length, char c);
//اين تابع مربع تو خالی به طول مشخص شده چاپ ميكند
void print_rectangle(int length, int width, char c, bool b);
//***اين تابع مستطیل  به طول و عرض مشخص شده چاپ ميكند***
void print_solid_rectangle(int length, int width, char c);
//اين تابع مستطیل توپر به طول و عرض مشخص شده چاپ ميكند
void print_empty_rectangle(int length, int width, char c);
//اين تابع مستطیل تو خالی به طول و عرض مشخص شده چاپ ميكند
void print_diamond(int length, char c, bool b);
//***اين تابع لوزي  به ظلع مشخص شده چاپ ميكند***
void print_solid_diamond(int length, char c);
//اين تابع لوزي توپر به ظلع مشخص شده چاپ ميكند
void print_empty_diamond(int length, char c);
//اين تابع لوزي تو خالی به ظلع مشخص شده چاپ ميكند
void print_parallelogram(int base, int height, char c, bool b);
//***اين تابع متوازی الاضلاع به قاعده و ارتفاع مشخص شده چاپ ميكند***
void print_solid_parallelogram(int base, int height, char c);
//اين تابع متوازی الاضلاع توپر به قاعده و ارتفاع مشخص شده چاپ ميكند
void print_empty_parallelogram(int base, int height, char c);
//اين تابع متوازی الاضلاع تو خالی به قاعده و ارتفاع مشخص شده چاپ ميكند
//----------------------------------------------
int main()
{
    menu();
    return 0;
}
//--------------------------------------------------
void menu()
// این تابع منو را نمایش می دهد وباتوجه به انتخاب کاربر مشخص میکند کدام تابع باید اجرا شود
{
    int l, w, a;
    bool b = 1, v = 1;
    char c = '*';
    while(v)
    {
        cout<<"Pleas enter the number related to the shape you want:"<<endl<<"1:Circle"<<endl<<"2:Hozrizonatel line"
        <<endl<<"3:Vertical line"<<endl<<"4:Square"<<endl<<"5:Rectangle"<<endl<<"6:Diamond"<<endl<<"7:parallelogram"
        <<endl<<"8:setting"<<endl<<"9:Exit"<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
                cout<<"Pleas enter radius: ";
                cin>>l;
                print_circle( l, c, b);
                break;
            case 2:
                cout<<"Pleas enter the line length:  ";
                cin>>l;
                print_hozrizonatel_line( l, c);
                break;
            case 3:
                cout<<"Pleas enter the line length:  ";
                cin>>l;
                print_vertical_line( l, c);
                break;
            case 4:
                cout<<"Pleas Enter edge length:  ";
                cin>>l;
                print_square( l, c, b);
                break;
            case 5:
                cout<<"Please enter length and width of the rectangle: ";
                cin>>l>>w;
                print_rectangle( l, w, c, b);
                break;
            case 6:
                cout<<"Please Enter edge length:  ";
                cin>>l;
                print_diamond( l, c, b);
                break;
            case 7:
                cout<<"Please enter base and heigh of the parallelogram: ";
                cin>>l>>w;  
                print_parallelogram( l, w, c, b);
                break;
            case 8:
                setting (b,c);
                break;
            case 9:
                v = 0;
                break;
            default:
                cout<<"Envalid command. Please try again";
        }
    }
}
//----------------------------------------------
void setting (bool &b, char &c)
//این تابع منو را نمایش می دهد
{
    int sett;
    bool va=1;
    while(va)
    {
        cout<<"Enter the number related to what you want to change : \n1:Change drowing soild or empaty shapes\n"
        <<"2:Change character that the shapes to be drown with \n3:change the color \n4:Exite \n";
        cin>>sett;
        switch(sett)
        {
            case 1:
                cout<<"If you want a solid shape enter 0 otherwise enter 1:  ";
                cin>>b;
                break;
            case 2:
                cout<<"Please enter the character you like the shape to be drawn with: ";
                cin>>c;
                break;
            case 3:
                change_color();
                break;
            case 4:
                va=0;
        }
    }
}
//----------------------------------------------
void change_color()
//اين تابع رنگ  را تغيير ميدهد
{
        int color;
    cout<<"Text colors :"<<endl<<"1:Blue"<<endl<<"2:Green"<<endl<<"3:Cyan"<<endl
    <<"4:Red"<<endl<<"5:Purple"<<endl<<"6:Yellow(Dark)"<<endl<<"7:White"<<endl<<"8:Gray"<<endl<<"9:Bright blue"<<endl
    <<"10:Bright green"<<"11:Bright cyan"<<endl<<"12:Bright red"<<endl<<"13:pink"<<endl<<"14:Yellow"<<endl<<"15:Bright white"<<endl
    <<"Number after 15 change background colors"<<endl<<"Pleas enter the number related to the color you wnnt:\t";
    cin>>color;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute( h, color);
    cout<<"\n";
}
//-----------------------------------------------
void print_circle(int r, char c, bool b)
//این تابع دایره به شعاع مشخص شده چاپ میکند
{
    if (b == 0)
        print_solid_circle(r, c);
    else
        print_empty_circle(r, c);
}
//-----------------------------------------------
void print_solid_circle(int r, char c)
//این تابع دایره ای توپر به شعاع مشخص شده چاپ میکند
{
    for(int y=r; y>=-r; y--)
    {   
        for(int x=-r; x<=r; x++)
        {
            if((x*x) + (y*y)<=r*r || (x*x) + (y*y)<=r*r+1|| (x*x) + (y*y)<=r*r-1 
            || (x*x) + (y*y)<=r*r+2 || (x*x) + (y*y)<=r*r-2)
                cout<<c<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
//--------------------------------------------------
void print_empty_circle(int r, char c)
//این تابع دایره ای توخالی به شعاع مشخص شده چاپ میکند
{
    for(int y=r; y>=-r; y--)
    {   
        for(int x=-r; x<=r; x++)
        {
            if((x*x) + (y*y)==r*r || (x*x) + (y*y)==r*r+1|| (x*x) + (y*y)==r*r-1 
            || (x*x) + (y*y)==r*r+2 || (x*x) + (y*y)==r*r-2)
                cout<<c<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
//----------------------------------
void print_hozrizonatel_line(int length, char c)
//این تابع خط افقی به طول مشخص شده چاپ میکند
{
    for(int i=1; i<=length; i++)
        cout<<c;
    cout<<endl;
}
//--------------------------------------------
void print_vertical_line(int length, char c)
//این تابع خط عمودی به طول مشخص شده چاپ میکند
{
    for(int i=1; i<=length; i++)
    
        cout<<c<<endl;
}
//-----------------------------------------------
void print_square(int length, char c, bool b)
//اين تابع مربع به طول مشخص شده چاپ ميكند
{
    if (b == 0)
        print_solid_square(length, c);
    if (b == 1)
        print_empty_square(length, c);
}
//----------------------------------------------
void print_solid_square(int length, char c)
//اين تابع مربع تو پر به طول مشخص شده چاپ ميكند
{
    for(int i=1; i<=length; i++)
    {
        for(int j=1; j<=length; j++)
            cout<<c<<" ";
        cout<<endl;
    }
}
//------------------------------------------------
void print_empty_square(int length, char c)
//اين تابع مربع تو خالی به طول مشخص شده چاپ ميكند
{
    for(int i=1; i<=length; i++)
        cout<<c<<" ";
    cout<<endl;
    for(int i=1; i<=length-2; i++)
    {
        cout<<c;
        for(int j=1; j<=2*length-3; j++)
            cout<<" ";
        cout<<c<<" ";
        cout<<endl;
    }
    for(int i=1; i<=length; i++)
        cout<<c<<" ";
    cout<<endl;

}
//--------------------------------------------
void print_rectangle(int length, int width, char c, bool b)
//اين تابع مستطیل  به طول و عرض مشخص شده چاپ ميكند
{
    if (b == 0)
        print_solid_rectangle(length, width, c);
    if (b == 1)
        print_empty_rectangle(length, width, c);   
}
//--------------------------------------------
void print_solid_rectangle(int length, int width, char c)
//اين تابع مستطیل توپر به طول و عرض مشخص شده چاپ ميكند
{
    for(int i=1; i<=width; i++)
    {
    for(int j=1; j<=length; j++)
        cout<<c<<" ";
    cout<<endl;
    }
}
//--------------------------------------------
void print_empty_rectangle(int length, int width, char c)
//اين تابع مستطیل تو خالی به طول و عرض مشخص شده چاپ ميكند
{
    for(int i=1; i<=length; i++)
        cout<<c<<" ";
    cout<<endl;
    for(int i=1; i<=width-2; i++)
    {
        cout<<c<<" ";
        for(int j=1; j<=length-2; j++)
            cout<<"  ";
        cout<<c<<" ";
        cout<<endl;
    }
    for(int i=1; i<=length; i++)
        cout<<c<<" ";
    cout<<endl;

}
//--------------------------------------------------
void print_diamond(int length, char c, bool b)
//اين تابع لوزي  به ظلع مشخص شده چاپ ميكند
{
    if (b == 0)
        print_solid_diamond(length, c);
    if (b == 1)
        print_empty_diamond(length, c);
}
//---------------------------------------------------
void print_solid_diamond(int length, char c
)//اين تابع لوزي تو پر به طول ضلع مشخص شده شده چاپ ميكند
{ 
    int diameter, s;
    diameter=2*length-1;//قطر لوزي
    s=length;
    for(int i=1; i<=diameter; i+=2)// چاپ بالاي لوزي
    {
        s--;
        for(int j=1; j<=s; j++)//چاپ فاصله هاي هر خط
            cout<<" ";
        for(int j=1; j<=i; j++)//چاپ ستاره هاي هر خط
            cout<<c;
        cout<<endl;
    }
    for(int i=diameter-2; i>=1; i-=2)//چاپ پايين لوزي
    {
        s++;
        for(int j=1; j<=s; j++)//چاپ فاصله هاي هر خط
            cout<<" ";
        for(int j=1; j<=i; j++)//چاپ ستاره هاي هر خط
            cout<<c;
        cout<<endl;
    }
}
//-----------------------------------------------------------
void print_empty_diamond(int length, char c)
//اين تابع لوزي تو خالی به طول ضلع مشخص شده چاپ ميكند
{    
    int diameter, s;
    diameter=2*length-1;//قطر لوزي
    s=length;
    for(int i=1; i<=diameter; i+=2)// چاپ بالاي لوزي
    {
        s--;
        for(int j=1; j<=s; j++)//چاپ فاصله هاي قبل لوزی
            cout<<" ";
        cout<<c;
        for(int j=1; j<=i-2; j++)//چاپ فاصله هاي درون لوزی
            cout<<" ";
        if(i!=1)
            cout<<c;        
        cout<<endl;
    }
    for(int i=diameter-2; i>=1; i-=2)//چاپ پايين لوزي
    {
        s++;
        for(int j=1; j<=s; j++)//چاپ فاصله هاي قبل لوزی
            cout<<" ";
        cout<<c;
        for(int j=1; j<=i-2; j++)//چاپ فاصله هاي درون لوزی
            cout<<" ";
        if(i!=1)
            cout<<c;        
        cout<<endl;
    }
}
//----------------------------------------------
void print_parallelogram(int base, int height, char c, bool b)
//اين تابع متوازی الاضلاع به قاعده و ارتفاع مشخص شده چاپ ميكند
{
    if (b == 0)
        print_solid_parallelogram(base, height, c);
    if (b == 1)
        print_empty_parallelogram(base, height, c);
}
//-----------------------------------------------
void print_solid_parallelogram(int base, int height, char c)
//اين تابع متوازی الاضلاع توپر به قاعده و ارتفاع مشخص شده چاپ ميكند
{
        for(int i=height; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
            cout<<" ";
        for(int j=1; j<=base; j++)
            cout<<c<<" ";
        cout<<endl;
    }
}
//-----------------------------------------------
void print_empty_parallelogram(int base, int height, char c)
//اين تابع متوازی الاضلاع تو خالی به قاعده و ارتفاع  مشخص شده چاپ ميكند
{
    for(int j=1; j<=height; j++)//خط اول
        cout<<"  ";
    for(int j=1; j<=base; j++)
        cout<<c<<" ";
    cout<<endl;
    for(int i=height-1; i>=1; i--)//خط های بینش
        {
            for(int j=1; j<=i; j++)
                cout<<"  ";
            cout<<c<<" ";//کاراکتر اول هر خط
            for(int i=1; i<=base-2; i++)
                cout<<"  ";
            cout<<c;//کاراکتر آخر هر خط
            cout<<endl;
        }
    for(int i=1; i<=base; i++)//خط آخر
        cout<<c<<" ";  
    cout<<endl;
}