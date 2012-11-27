// prueba.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <malloc.h>

typedef struct Prueba
{
	int i;
} Prueba;

typedef struct Prueba2
{
	char *msg;
} Prueba2;

Prueba* createPrueba()
{
	Prueba *p = (Prueba*)malloc(sizeof(Prueba));
	return p;
}

void deletePrueba(Prueba *p)
{
	free(p);
}

Prueba2* createPrueba2()
{
	Prueba2 *p = (Prueba2*)malloc(sizeof(Prueba2));
	p->msg = (char*)malloc(100);
	return p;
}

void deletePrueba2(Prueba2 *p)
{
	free(p->msg);
	free(p);
}

class Buffer
{
public:
	Buffer(){}
	virtual ~Buffer(){}
};

template<typename T>
class Buffer_ : public Buffer
{
public:
	Buffer_(T *data, void (*deleteFnc)(T *data)) : m_data(data),
		m_deleteFnc(deleteFnc)
	{
	}

	virtual ~Buffer_()
	{
		m_deleteFnc(m_data);
	}

private:

	T *m_data;

	void (*m_deleteFnc)(T *data);
};

Buffer* createBufferPrueba()
{
	Prueba *p = createPrueba();
	Buffer_<Prueba> *b = new Buffer_<Prueba>(p, deletePrueba);
	return b;
}

Buffer* createBufferPrueba2()
{
	Prueba2 *p = createPrueba2();
	Buffer_<Prueba2> *b = new Buffer_<Prueba2>(p, deletePrueba2);
	return b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Buffer *b = createBufferPrueba();
	Buffer *b2 = createBufferPrueba2();
	Buffer_<Prueba> *d = dynamic_cast<Buffer_<Prueba>*>(b);
	d = dynamic_cast<Buffer_<Prueba>*>(b2);
	return 0;
}

