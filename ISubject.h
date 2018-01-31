#ifndef __BADPROG_ISUBJECT_H__
#define	__BADPROG_ISUBJECT_H__

#include "IObserver.h"
// Badprog.com

class ISubject {
public:

	virtual ~ISubject() {};								
	virtual void attach(IObserver *observer)	= 0;	// VP
	virtual void detach(IObserver *observer)	= 0;	// VP
	virtual void notify()						= 0;	// VP
};

#endif // __BADPROG_ISUBJECT_H__