//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   Form1->Repaint();

	//Фон елки
	Canvas->Pen->Color = clBlue;
	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Rectangle(100, 100, 500, 700);

	Canvas->Pen->Color = clSkyBlue;
	Form1->Canvas->Brush->Color = clSkyBlue;
	Form1->Canvas->Rectangle(100, 500, 500, 700);

	Canvas->Pen->Color = clSilver;
	Form1->Canvas->Brush->Color = clSilver;
	Form1->Canvas->Rectangle(100, 600, 500, 700);

	//Снеговик
	Canvas->Pen->Color = clWhite;
	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Ellipse(120, 535, 250, 665);     //130 //нижний
	Form1->Canvas->Ellipse(135, 450, 235, 550);      //100//средний
	Form1->Canvas->Ellipse(150, 380, 230, 460);     //80//верхний

	//Глазки
	Canvas->Pen->Color = clBlack;
	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Ellipse(189, 410, 203, 430);
	Form1->Canvas->Ellipse(216, 405, 229, 425);  //правый
	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Ellipse(195, 417, 201, 431);
	Form1->Canvas->Ellipse(223, 412, 228, 425);  //правый

	TPoint points[3];
	//Рот
	points[0] = Point(210, 440);
	points[1] = Point(212, 442);
	points[2] = Point(214, 442);
	points[3] = Point(216, 440);
	Form1->Canvas->Polyline(points, 3);

	//Морковка
	points[0] = Point(200, 430);
	points[1] = Point(250, 440);
	points[2] = Point(220, 425);
	Canvas->Pen->Color = clRed;
	Form1->Canvas->Brush->Color = clRed;
	Form1->Canvas->Polygon(points, 2);

	//Ведро
	points[0] = Point(140, 370);
	points[1] = Point(150, 410);
	points[2] = Point(200, 380);
	points[3] = Point(170, 350);
	Canvas->Pen->Color = clGray;
	Form1->Canvas->Brush->Color = clGray;
	Form1->Canvas->Polygon(points, 3);

	for (int i = 0; i < 100; i++) {
		int x, y;
		x = 100 + rand() % 400;
		y = 100 + rand() % 600;
		Canvas->Pen->Color = clWhite;
		Form1->Canvas->Brush->Color = clWhite;
		Form1->Canvas->Ellipse(x, y, x + 5, y + 5);
	}
	Canvas->Brush->Style=bsClear;
	Canvas->Font->Color=clWhite;
	Canvas->Font->Name="Comic Sans MS";
	Canvas->Font->Size=35;
	Canvas->TextOut(120,200,"С Новым Годом");
}
//---------------------------------------------------------------------------
