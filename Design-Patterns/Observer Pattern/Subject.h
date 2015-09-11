#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include "Observer.h"

#include <stdio.h>

class ISubject{
public:
	virtual void registerObserver(IObserver* const o) = 0;	// ������ ���
	virtual void removeObserver(IObserver* const o) = 0;	// ������ ����
	virtual void notifyObserver() = 0;	// ������� ����
};

#endif _SUBJECT_H_