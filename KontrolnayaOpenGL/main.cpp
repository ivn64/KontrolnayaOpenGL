#define UNICODE

// WinAPI
#include <Windows.h>
#include <tchar.h>

// OpenGL
#pragma comment(lib, "opengl32.lib")

// GLUT
#pragma comment(lib, "glut32.lib")
#include "glut.h"

// GLAUX (текстуры)
#pragma comment(lib, "GLAUX.LIB")
#include "glaux.h"

GLuint	texture[1]; // Место для текстуры

int A[4][4] = { { 7,3,14,9 },{ 0,5,6,2 },{ 10,1,13,8 },{ 15,11,4,12 }, };

void change(int &a, int &b) // функция "три стакана"
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}
GLvoid LoadGLTextures() // Загрузка картинки и конвертирование в текстуру
{
	// Загрузка картинки
	AUX_RGBImageRec *texture1;
	texture1 = auxDIBImageLoad(L"1.bmp");
	AUX_RGBImageRec *texture2;
	texture2 = auxDIBImageLoad(L"2.bmp");
	AUX_RGBImageRec *texture3;
	texture3 = auxDIBImageLoad(L"3.bmp");
	AUX_RGBImageRec *texture4;
	texture4 = auxDIBImageLoad(L"4.bmp");
	AUX_RGBImageRec *texture5;
	texture5 = auxDIBImageLoad(L"5.bmp");
	AUX_RGBImageRec *texture6;
	texture6 = auxDIBImageLoad(L"6.bmp");
	AUX_RGBImageRec *texture7;
	texture7 = auxDIBImageLoad(L"7.bmp");
	AUX_RGBImageRec *texture8;
	texture8 = auxDIBImageLoad(L"8.bmp");
	AUX_RGBImageRec *texture9;
	texture9 = auxDIBImageLoad(L"9.bmp");
	AUX_RGBImageRec *texture10;
	texture10 = auxDIBImageLoad(L"10.bmp");
	AUX_RGBImageRec *texture11;
	texture11 = auxDIBImageLoad(L"11.bmp");
	AUX_RGBImageRec *texture12;
	texture12 = auxDIBImageLoad(L"12.bmp");
	AUX_RGBImageRec *texture13;
	texture13 = auxDIBImageLoad(L"13.bmp");
	AUX_RGBImageRec *texture14;
	texture14 = auxDIBImageLoad(L"14.bmp");
	AUX_RGBImageRec *texture15;
	texture15 = auxDIBImageLoad(L"15.bmp");
	// Создание текстуры
	glGenTextures(1, &texture[1]);
	glBindTexture(GL_TEXTURE_2D, texture[1]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture1->sizeX, texture1->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture1->data);
	glGenTextures(1, &texture[2]);
	glBindTexture(GL_TEXTURE_2D, texture[2]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture2->sizeX, texture2->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture2->data);
	glGenTextures(1, &texture[3]);
	glBindTexture(GL_TEXTURE_2D, texture[3]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture3->sizeX, texture3->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture3->data);
	glGenTextures(1, &texture[4]);
	glBindTexture(GL_TEXTURE_2D, texture[4]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture4->sizeX, texture4->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture4->data);
	glGenTextures(1, &texture[5]);
	glBindTexture(GL_TEXTURE_2D, texture[5]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture5->sizeX, texture5->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture5->data);
	glGenTextures(1, &texture[6]);
	glBindTexture(GL_TEXTURE_2D, texture[6]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture6->sizeX, texture6->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture6->data);
	glGenTextures(1, &texture[7]);
	glBindTexture(GL_TEXTURE_2D, texture[7]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture7->sizeX, texture7->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture7->data);
	glGenTextures(1, &texture[8]);
	glBindTexture(GL_TEXTURE_2D, texture[8]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture8->sizeX, texture8->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture8->data);
	glGenTextures(1, &texture[9]);
	glBindTexture(GL_TEXTURE_2D, texture[9]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture9->sizeX, texture9->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture9->data);
	glGenTextures(1, &texture[10]);
	glBindTexture(GL_TEXTURE_2D, texture[10]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture10->sizeX, texture10->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture10->data);
	glGenTextures(1, &texture[11]);
	glBindTexture(GL_TEXTURE_2D, texture[11]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture11->sizeX, texture11->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture11->data);
	glGenTextures(1, &texture[12]);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture12->sizeX, texture12->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture12->data);
	glGenTextures(1, &texture[13]);
	glBindTexture(GL_TEXTURE_2D, texture[13]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture13->sizeX, texture13->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture13->data);
	glGenTextures(1, &texture[14]);
	glBindTexture(GL_TEXTURE_2D, texture[14]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture14->sizeX, texture14->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture14->data);
	glGenTextures(1, &texture[15]);
	glBindTexture(GL_TEXTURE_2D, texture[15]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture15->sizeX, texture15->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, texture15->data);
}
void Pole()
{
	for (float i = 0.0f; i < 2.2f; i += 0.7f)
	{
		for (float j = 0.0f; j < 2.2f; j += 0.7f)
		{
			int a, b;
			a = i / 0.7f;
			b = j / 0.7f;
			if (A[b][a] != 0)
			{
				glPushMatrix();
				glColor3f(1, 1, 1); //Выбираем цвет
				glTranslatef(0.0f + i, 0.0f - j, 0.0f); // сдвиг системы координат
				glBindTexture(GL_TEXTURE_2D, texture[A[b][a]]);
				glBegin(GL_POLYGON);
				glTexCoord2f(0.0f, 0.0f); glVertex2f(0.0f, 0.0f);
				glTexCoord2f(0.0f, 1.0f); glVertex2f(0.0f, 0.6f);
				glTexCoord2f(1.0f, 1.0f); glVertex2f(0.6f, 0.6f);
				glTexCoord2f(1.0f, 0.0f); glVertex2f(0.6f, 0.0f);
				glEnd();
				glPopMatrix();
			}
		}
	}
}
void Initialize()
{
	LoadGLTextures(); // Загрузка текстур
	glEnable(GL_TEXTURE_2D);// Разрешение наложение текстуры
	glClearColor(0.0, 0.0, 0.0, 1.0); //Выбрать фоновый (очищающий) цвет
	glMatrixMode(GL_PROJECTION); //Установить проекцию
	glLoadIdentity(); // сброс матрицы
}
void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Очищаем буфер цвета и глубины
	glLoadIdentity(); // обнуление трансформации
	gluLookAt(0.0f, 0.0f, 8.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f); // установка камеры
	Pole();
	glutSwapBuffers();
}
void changeSize(int w, int h) {

	// предупредим деление на ноль
	// если окно сильно перетянуто будет
	if (h == 0)
		h = 1;
	float ratio = 1.0* w / h;

	// используем матрицу проекции
	glMatrixMode(GL_PROJECTION);

	// Reset матрицы
	glLoadIdentity();

	// определяем окно просмотра
	glViewport(-100, 50, w, h);

	// установить корректную перспективу.
	gluPerspective(45, ratio, 1, 1000);

	// вернуться к модели
	glMatrixMode(GL_MODELVIEW);
}
void processNormalKeys(unsigned char key, int x, int y)
{
	if (key == 27)
		exit(0);
}
void processSpecialKeys(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_UP:
	{
		int a, b = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (A[i][j] == 0)
				{
					a = i;
					b = j;
				}
			}
		}
		if (a != 3)
			change(A[a][b], A[a + 1][b]);
	}
	break;
	case GLUT_KEY_DOWN:
	{
		int a, b = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (A[i][j] == 0)
				{
					a = i;
					b = j;
				}
			}
		}
		if (a != 0)
			change(A[a][b], A[a - 1][b]);
	}
	break;
	case GLUT_KEY_LEFT:
	{
		int a, b = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (A[i][j] == 0)
				{
					a = i;
					b = j;
				}
			}
		}
		if (b != 3)
			change(A[a][b], A[a][b + 1]);
	}
	break;
	case GLUT_KEY_RIGHT:
	{
		int a, b = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (A[i][j] == 0)
				{
					a = i;
					b = j;
				}
			}
		}
		if (b != 0)
			change(A[a][b], A[a][b - 1]);
	}
	break;
	}
}

int WINAPI wWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPWSTR lpCmdLine, int nShowCmd)
{
	// Аргументы командной строки (путь к EXE)
	char *argv0 = new char[512];
	GetModuleFileNameA(0, argv0, 512);
	int argc = 1; // Число аргументов (один только путь к EXE, поэтому, argc = 1)
	glutInit(&argc, &argv0); // Инициализация GLUT, для данного EXE
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // отображение
	glutInitWindowPosition(100, 100); //Позиция окна
	glutInitWindowSize(600, 600); //Указываем размер окна
	glutCreateWindow("Пятнашки"); //Имя окна
	Initialize(); //Вызов функции Initialize
	glutDisplayFunc(Draw); //Вызов функции отрисовки
	glutIdleFunc(Draw); // вызываться системой всякий раз, когда ваше приложение простаивает, т.е. ничего не делает
	glutReshapeFunc(changeSize); // функция изменения размеров окна
	glutKeyboardFunc(processNormalKeys); //считывание символов ASCII
	glutSpecialFunc(processSpecialKeys); //считывание специальных символов
	glutMainLoop();
	return 1;
}