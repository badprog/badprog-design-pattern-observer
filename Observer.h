#ifndef __BADPROG_OBSERVER_H__
#define	__BADPROG_OBSERVER_H__

#include "IObserver.h"
#include "Subject.h"
// Badprog.com

class Observer : public IObserver
{
public:
	Observer(Subject &subject);
	virtual ~Observer();

	void update(const string &messageFromSubject);
	void removeMeFromTheList();
	void printInfo();

private:
	string		_messageFromSubject;
	Subject&	_subject;
	static int	_staticNumber;
	int			_number;
};

#endif // __BADPROG_OBSERVER_H__